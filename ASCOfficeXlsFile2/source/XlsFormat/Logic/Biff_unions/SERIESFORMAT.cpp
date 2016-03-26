
#include "SERIESFORMAT.h"
#include <Logic/Biff_records/Series.h>
#include <Logic/Biff_records/Begin.h>
#include <Logic/Biff_records/SerToCrt.h>
#include <Logic/Biff_records/SerParent.h>
#include <Logic/Biff_records/SerAuxTrend.h>
#include <Logic/Biff_records/SerAuxErrBar.h>
#include <Logic/Biff_records/LegendException.h>
#include <Logic/Biff_records/End.h>
#include <Logic/Biff_records/SerAuxTrend.h>
#include <Logic/Biff_records/SerAuxErrBar.h>

#include <Logic/Biff_unions/AI.h>
#include <Logic/Biff_unions/SS.h>
#include <Logic/Biff_unions/ATTACHEDLABEL.h>
#include <Logic/Biff_unions/TEXTPROPS.h>

namespace XLS
{


SERIESFORMAT::SERIESFORMAT()
{
}


SERIESFORMAT::~SERIESFORMAT()
{
}


//  (SerToCrt / (SerParent (SerAuxTrend / SerAuxErrBar))) 
class Parenthesis_SERIESFORMAT_1: public ABNFParenthesis
{
	BASE_OBJECT_DEFINE_CLASS_NAME(Parenthesis_SERIESFORMAT_1)
public:
	BaseObjectPtr clone()
	{
		return BaseObjectPtr(new Parenthesis_SERIESFORMAT_1(*this));
	}

	const bool loadContent(BinProcessor& proc)
	{
		if(!proc.optional<SerToCrt>())
		{
			proc.mandatory<SerParent>();
			if(!proc.optional<SerAuxTrend>())
			{
				proc.mandatory<SerAuxErrBar>();
			}
		}
		return true;
	};
};


// (LegendException [Begin ATTACHEDLABEL [TEXTPROPS] End])
class Parenthesis_SERIESFORMAT_2: public ABNFParenthesis
{
	BASE_OBJECT_DEFINE_CLASS_NAME(Parenthesis_SERIESFORMAT_2)
public:
	BaseObjectPtr clone()
	{
		return BaseObjectPtr(new Parenthesis_SERIESFORMAT_2(*this));
	}

	const bool loadContent(BinProcessor& proc)
	{
		if(!proc.mandatory<LegendException>())
		{
			return false;
		}
		if(proc.optional<Begin>())
		{
			proc.mandatory<ATTACHEDLABEL>();
			proc.optional<TEXTPROPS>();
			proc.mandatory<End>();
		}
		return true;
	};
};


BaseObjectPtr SERIESFORMAT::clone()
{
	return BaseObjectPtr(new SERIESFORMAT(*this));
}


/*
SERIESFORMAT = Series Begin 4AI *SS (SerToCrt / (SerParent (SerAuxTrend / SerAuxErrBar))) 
				*(LegendException [Begin ATTACHEDLABEL [TEXTPROPS] End]) End
*/
const bool SERIESFORMAT::loadContent(BinProcessor& proc)
{
	int count = 0;

	if(!proc.mandatory<Series>())
	{
		return false;
	}
	m_Series = elements_.back();
	elements_.pop_back();
	
	proc.mandatory<Begin>();								elements_.pop_back(); //skip
	
	count = proc.repeated<AI>(4, 4);
	while(count > 0 && elements_.size() > 0)
	{
		m_arAI.insert(m_arAI.begin(), elements_.back());
		elements_.pop_back();
		count--;
	}

	if (proc.mandatory<SS>())
	{
		m_SS = elements_.back();
		elements_.pop_back();
	}	
	//SS* ss_common = dynamic_cast<SS*>(m_SS.get());
	count = proc.repeated<SS>(0, 0);
	while(count > 0)
	{
		//SS* ss = dynamic_cast<SS*>(elements_.back().get());
		//if (ss && ss_common)
		//{
		//	if (!ss->m_LineFormat && ss_common->m_LineFormat)
		//	{
		//		ss->m_LineFormat	= ss_common->m_LineFormat;
		//		ss->m_AreaFormat	= ss_common->m_AreaFormat;
		//		ss->m_PieFormat		= ss_common->m_PieFormat;
		//	}
		//}

		m_arPtSS.insert(m_arPtSS.begin(), elements_.back());
		elements_.pop_back();
		count--;
	}
	//��� �����
	if (proc.mandatory<Parenthesis_SERIESFORMAT_1>())
	{
		count = elements_.size();
		while(count > 0)
		{
			if		("SerParent"	== elements_.front()->getClassName())
				m_SerParent = elements_.front();
			else if ("SerToCrt"		== elements_.front()->getClassName())
				m_SerToCrt = elements_.front();
			else if ("SerAuxTrend"	== elements_.front()->getClassName() ||
					 "SerAuxErrBar"	== elements_.front()->getClassName())
			{
				SerParent *parent = dynamic_cast<SerParent*>(m_SerParent.get());
				if (parent  && "SerAuxTrend"	== elements_.front()->getClassName())
				{
					parent->m_SerAuxTrend = elements_.front();
				}
				if (parent  && "SerAuxErrBar"	== elements_.front()->getClassName())
				{
					parent->m_SerAuxErrBar = elements_.front();
				}
			}
			elements_.pop_front();	count--;
		}
	}

	count = proc.repeated<Parenthesis_SERIESFORMAT_2>(0, 0); // ��� ���� "����������"

	count = elements_.size();
	while(count > 0)
	{
		_series_ex ex;

		ex.legendException = elements_.front();
		elements_.pop_front(); count--;

		while ( count > 0 ) 
		{
			if ("ATTACHEDLABEL" == elements_.front()->getClassName())
			{
				ex.attachedLABEL = elements_.front();
			}
			else if ("TEXTPROPS" == elements_.front()->getClassName())
			{
				ex.textPROPS = elements_.front();
			}
			else if ("LegendException" == elements_.front()->getClassName())
			{
				break;	//next
			}
			elements_.pop_front(); count--;
		}
		m_SeriesEx.push_back(ex);
	}

	if (proc.mandatory<End>())							elements_.pop_back(); //skip

	return true;
}

int SERIESFORMAT::serialize_legend(std::wostream & _stream, int idx)
{
	if (m_SeriesEx.empty()) return 0;

	ATTACHEDLABEL	*att				= dynamic_cast<ATTACHEDLABEL*>	(m_SeriesEx[0].attachedLABEL.get());
	LegendException *legendException	= dynamic_cast<LegendException*>(m_SeriesEx[0].legendException.get());
	TEXTPROPS		*text_props			= dynamic_cast<TEXTPROPS*>		(m_SeriesEx[0].textPROPS.get());

	CP_XML_WRITER(_stream)    
	{
		CP_XML_NODE(L"c:legendEntry")//legendException->fLabel ????? 
		{
			CP_XML_NODE(L"c:idx")
			{
				CP_XML_ATTR(L"val", idx); //legendException->iss = oxffff ������� ��� �����
			}
			if (att)
			{
				att->serialize_txPr(CP_XML_STREAM());
			}
			legendException->serialize(CP_XML_STREAM());
		}
	}

	return 0;
}

int SERIESFORMAT::serialize_parent(std::wostream & _stream, bool ext)
{
	if (m_SerParent == NULL)
	{
		if (m_SERIESFORMAT_ext)
		{
			SERIESFORMAT * series_ext = dynamic_cast<SERIESFORMAT *>(m_SERIESFORMAT_ext.get());
			if (series_ext)
				return series_ext->serialize_parent(_stream, true/*, series_id, crt*/);
		}
		return 0;
	}
	SerParent *ser_parent = dynamic_cast<SerParent*>(m_SerParent.get());
	if (ser_parent == NULL) return 0;

	CP_XML_WRITER(_stream)    
	{
		SerAuxTrend		* trendline = dynamic_cast<SerAuxTrend *>(ser_parent->m_SerAuxTrend.get());
		SerAuxErrBar	* err_bars	= dynamic_cast<SerAuxErrBar*>(ser_parent->m_SerAuxErrBar.get());
		
		if (trendline)
		{
			CP_XML_NODE(L"c:trendline")
			{
				//<c:spPr><a:ln w="25400"><a:solidFill><a:srgbClr val="000000"/></a:solidFill><a:prstDash val="solid"/></a:ln></c:spPr>
				CP_XML_NODE(L"c:trendlineType")
				{
					switch(trendline->regt)
					{
						case 1:		CP_XML_ATTR (L"val", L"exp");		break;
						case 2:		CP_XML_ATTR (L"val", L"log");		break;
						case 3:		CP_XML_ATTR (L"val", L"power");		break;
						case 4:		CP_XML_ATTR (L"val", L"movingAvg"); break;
						case 0:		//CP_XML_ATTR (L"val", L"poly");		break;
						default:	CP_XML_ATTR (L"val", L"linear");	break;
					}
				}
				
				CP_XML_NODE(L"c:dispRSqr")
				{
					CP_XML_ATTR (L"val" , (bool)trendline->fRSquared);	
				}
				CP_XML_NODE(L"c:dispEq")
				{
					CP_XML_ATTR (L"val" , (bool)trendline->fEquation);	
				}
			}
		}
		
		if (err_bars)
		{
			//todooo
			//CP_XML_NODE(L"c:errBars")
			//{
			//}
		}
	}

	return 0;
}
} // namespace XLS

