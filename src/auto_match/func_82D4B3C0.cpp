// hkpGroupFilter::isCollisionEnabled(hkUint32 infoA, hkUint32 infoB) const
// (Physics/Collide/Filter/Group/hkpGroupFilter.cpp).
#include "havok/hkpGroupFilter.h"

extern "C" hkBool fn_82D4B3C0(const hkpGroupFilter *self, hkUint32 infoA, hkUint32 infoB)
{
    if (((infoA ^ infoB) & 0xffff0000) == 0 && (infoA & 0xffff0000) != 0) {
        if ((((infoB >> 5) ^ infoA) & 0x3e0) == 0)
            return false;
        if ((((infoA >> 5) ^ infoB) & 0x3e0) == 0)
            return false;
        return true;
    }
    return 0 != (self->m_collisionLookupTable[infoA & 0x1f] & (1 << (infoB & 0x1f)));
}
