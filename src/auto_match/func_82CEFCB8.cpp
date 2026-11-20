#include "havok/hkTransform.h"

typedef struct Obj_82CEFCB8 Obj_82CEFCB8;

typedef struct Vtbl_82CEFCB8 {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*getData)(Obj_82CEFCB8 *self, hkTransform *out);    /* 0x0c */
    void *slot4;
    void *slot5;
    void *slot6;
    void *slot7;
    Obj_82CEFCB8 *(*parent)(Obj_82CEFCB8 *self);       /* 0x20 */
} Vtbl_82CEFCB8;

struct Obj_82CEFCB8 {
    Vtbl_82CEFCB8 *vt;
};

extern "C" void fn_82CEFCB8(Obj_82CEFCB8 *self, hkTransform *out)
{
    hkTransform local;
    hkTransform world;

    if (self->vt->parent(self) != 0) {
        fn_82CEFCB8(self->vt->parent(self), &world);
        self->vt->getData(self, &local);
        out->setMul(world, local);
    } else {
        self->vt->getData(self, out);
    }
}
