
#include "NameParsedFormula.h"
#include <Binary/CFRecord.h>
#include "StringPtgParser.h"

#include <boost/algorithm/string.hpp>

namespace XLS
{

ParsedFormula::ParsedFormula(const CellRef& cell_base_ref)
:	cce(0),
	cce_is_set(false),
	rgce(cell_base_ref)
{
}

void ParsedFormula::setCCE(const size_t cce_val)
{
	rgce.setCCE(cce_val);
}


const size_t ParsedFormula::getCCE() const
{
	return rgce.getCCE();
}

const bool ParsedFormula::HasPtgTbl() const
{
	const PtgVector& ptgs = rgce.getPtgs();
	for(PtgVectorIterator it = ptgs.begin(), itEnd = ptgs.end(); it != itEnd; ++it)
	{
		if(0x0002/*PtgTbl*/ == (*it)->getPtgId())
		{
			return true;
		}
	}
	return false;
}


const std::wstring ParsedFormula::getAssembledFormula(bool full_ref) const
{
	const PtgVector& ptgs = rgce.getPtgs();
	if(ptgs.empty())
	{
		return L"";
	}

	try
	{
		AssemblerStack ptg_stack;
		PtgQueue extra_data = rgcb.getPtgs();
		for(PtgVectorIterator it = ptgs.begin(), itEnd = ptgs.end(); it != itEnd; ++it)
		{
			(*it)->assemble(ptg_stack, extra_data, full_ref);
		}
		if(1 != ptg_stack.size())
		{
			return L"";
			//throw; EXCEPT::LE::WrongAPIUsage("Wrong formula assembling.", __FUNCTION__);
		}
		return ptg_stack.top();
	}
	catch(...)
	{
	}
	return L"";
}


//const bool ParsedFormula::parseStringFormula(const std::wstring formula, const std::wstring & tag_name)
//{
//	StringPtgParser parser;
//	if(parser.parseToPtgs(boost::algorithm::trim_copy(formula), rgce, rgcb, tag_name))
//	{
//		return true;
//	}
//	return false;
//}


} // namespace XLS

