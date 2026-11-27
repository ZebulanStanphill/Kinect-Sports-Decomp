// A clone of hkpBallAndSocketConstraintData: a new data with the source's atoms copied over (0x38 bytes from +0x10). The function's own
// name is not known.
#include "havok/hkBase.h"
#include "havok/hkString.h"
#include "havok/hkpBallAndSocketConstraintData.h"

extern "C" hkpBallAndSocketConstraintData *fn_82DBEF20(const hkpBallAndSocketConstraintData *src)
{
    hkpBallAndSocketConstraintData *o = new hkpBallAndSocketConstraintData();
    hkString::memCpy(&o->m_atoms, &src->m_atoms, 0x38);
    return o;
}
