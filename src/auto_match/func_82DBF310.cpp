// A clone of hkpPulleyConstraintData: a new data with the source's atoms copied over (0x70 bytes from +0x10). The function's own
// name is not known.
#include "havok/hkBase.h"
#include "havok/hkString.h"
#include "havok/hkpPulleyConstraintData.h"

extern "C" hkpPulleyConstraintData *fn_82DBF310(const hkpPulleyConstraintData *src)
{
    hkpPulleyConstraintData *o = new hkpPulleyConstraintData();
    hkString::memCpy(&o->m_atoms, &src->m_atoms, 0x70);
    return o;
}
