#include "havok/hkTransform.h"


typedef struct Entry_82E007E8 {
    char pad0[0x10];
    hkTransform transform;   /* 0x10 */
    char pad1[0x10];
} Entry_82E007E8;

typedef struct Obj_82E007E8 {
    char pad0[0x10];
    Entry_82E007E8 *entries;        /* 0x10 */
} Obj_82E007E8;

extern "C" void fn_82E007E8(Obj_82E007E8 *self, int unused, unsigned char index, hkVector4 *v)
{
    hkTransform *t = &self->entries[index].transform;
    hkVector4 local;
    hkVector4 result;

    local.setTransformedInversePos(*t, *v);
    local(2) = 0.0f;
    result.setTransformedPos(*t, local);
    *v = result;
}
