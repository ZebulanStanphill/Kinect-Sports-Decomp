#include "havok/hkVector4.h"

extern "C" {

extern const float lbl_82006848;         // default epsilon
}

struct Owner_82DF2508 {
    char pad00[8];
    void *world;                     // 0x08
};

struct Obj_82DF2508 {
    char pad00[0x18];
    Owner_82DF2508 *owner;           // 0x18
    char pad1c[0x14];
    hkVector4 value;                 // 0x30
};

extern "C" void fn_82D89BD8(Owner_82DF2508 *owner);

extern "C" void fn_82DF2508(Obj_82DF2508 *self, const hkVector4 &value)
{
    if (!value.equals3(self->value, lbl_82006848)) {
        if (self->owner != 0 && self->owner->world != 0) {
            fn_82D89BD8(self->owner);
        }
    }
    self->value = value;
}
