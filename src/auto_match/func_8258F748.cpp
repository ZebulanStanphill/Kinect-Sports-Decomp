/* Collision group filter with 64 layers (6-bit layer fields, 14-bit system group): the hkpGroupFilter::isCollisionEnabled
   shape of func_82D4B3C0 with a 64-entry lookup table. */
#include "havok/hkBase.h"

struct GroupFilter_8258F748 {
    char pad0[0x34];
    hkUint32 m_collisionLookupTable[64];    /* 0x34 */
};

extern "C" hkBool fn_8258F748(const GroupFilter_8258F748 *self, hkUint32 infoA, hkUint32 infoB)
{
    if (((infoA ^ infoB) & 0xffff0000) == 0 && (infoA & 0xfffc0000) != 0) {
        if ((((infoB >> 6) ^ infoA) & 0xfc0) == 0)
            return false;
        if ((((infoA >> 6) ^ infoB) & 0xfc0) == 0)
            return false;
        return true;
    }
    return 0 != (self->m_collisionLookupTable[infoA & 0x3f] & (1 << (infoB & 0x3f)));
}
