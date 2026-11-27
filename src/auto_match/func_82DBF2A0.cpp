// A clone of hkpPointToPlaneConstraintData: a new data with the source's atoms copied over (0x94 bytes from +0x10). The function's own
// name is not known.
#include "havok/hkBase.h"
#include "havok/hkString.h"
#include "havok/hkpPointToPlaneConstraintData.h"

extern "C" hkpPointToPlaneConstraintData *fn_82DBF2A0(const hkpPointToPlaneConstraintData *src)
{
    hkpPointToPlaneConstraintData *o = new hkpPointToPlaneConstraintData();
    hkString::memCpy(&o->m_atoms, &src->m_atoms, 0x94);
    return o;
}
