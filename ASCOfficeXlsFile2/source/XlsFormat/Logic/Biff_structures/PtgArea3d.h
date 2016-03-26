#pragma once

#include "OperandPtg.h"
#include "CellRangeRef.h"
#include "Logic/GlobalWorkbookInfo.h"

namespace XLS
{

class CFRecord;

class PtgArea3d: public OperandPtg
{
	BASE_STRUCTURE_DEFINE_CLASS_NAME(PtgArea3d)
public:
	PtgArea3d(const CellRef& cell_base_ref_init);
	PtgArea3d(const unsigned short ixti, const std::wstring& word, const PtgDataType data_type, const CellRef& cell_base_ref_init);
	BiffStructurePtr clone();

	virtual void loadFields(CFRecord& record);
	virtual void storeFields(CFRecord& record);

	virtual void assemble(AssemblerStack& ptg_stack, PtgQueue& extra_data, bool full_ref = false);
	static const unsigned short fixed_id = 0x1B;

	GlobalWorkbookInfoPtr	global_info;

//biff8
	unsigned short			ixti;
	RgceAreaRel				area_rel;
	RgceArea				area;
	const CellRef&			cell_base_ref;
//biff5
	unsigned short			ixals;
	unsigned short			itabFirst;
	unsigned short			itabLast;
	unsigned short			grbitRwFirst;
	unsigned short			grbitRwLast;
	unsigned char			colFirst;
	unsigned char			colLast;
};

} // namespace XLS

