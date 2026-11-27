// A clone of hkpPrismaticConstraintData: a new data with the source's atoms copied over (0xc0 bytes from +0x10). The function's own
// name is not known.
#include "havok/hkBase.h"
#include "havok/hkString.h"
#include "havok/hkpPrismaticConstraintData.h"

extern "C" hkpPrismaticConstraintData *fn_82DBF0E0(const hkpPrismaticConstraintData *src)
{
    hkpPrismaticConstraintData *o = new hkpPrismaticConstraintData();
    hkString::memCpy(&o->m_atoms, &src->m_atoms, 0xc0);
    return o;
}
