// A clone of hkpHingeLimitsData: a new data with the source's atoms copied over (0x84 bytes from +0x10). The function's own
// name is not known.
#include "havok/hkBase.h"
#include "havok/hkString.h"
#include "havok/hkpHingeLimitsData.h"

extern "C" hkpHingeLimitsData *fn_82DBF380(const hkpHingeLimitsData *src)
{
    hkpHingeLimitsData *o = new hkpHingeLimitsData();
    hkString::memCpy(&o->m_atoms, &src->m_atoms, 0x84);
    return o;
}
