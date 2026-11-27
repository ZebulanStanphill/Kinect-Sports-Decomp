// A clone of hkpStiffSpringConstraintData: a new data with the atoms copied from the source (0x38 bytes from
// +0x10). The function's own name is not known.
#include "havok/hkBase.h"
#include "havok/hkString.h"
#include "havok/hkpStiffSpringConstraintData.h"

extern "C" hkpStiffSpringConstraintData *fn_82DBF1C0(const hkpStiffSpringConstraintData *src)
{
    hkpStiffSpringConstraintData *o = new hkpStiffSpringConstraintData();
    hkString::memCpy(&o->m_atoms, &src->m_atoms, 0x38);
    return o;
}
