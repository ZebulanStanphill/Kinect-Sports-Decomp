#include "havok/hkBase.h"

struct hkpGroupFilter_82D4B3C0 {
    char pad0[0x30];
    hkInt32 m_nextFreeSystemGroup;          /* 0x30 */
    hkUint32 m_collisionLookupTable[32];    /* 0x34 */
};

extern "C" hkBool fn_82D4B3C0(const hkpGroupFilter_82D4B3C0 *self, hkUint32 infoA, hkUint32 infoB)
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
