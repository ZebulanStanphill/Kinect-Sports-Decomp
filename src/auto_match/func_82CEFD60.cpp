#include "havok/hkTransform.h"

typedef struct Obj_82CEFD60 Obj_82CEFD60;

typedef struct Vtbl_82CEFD60 {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*getData)(Obj_82CEFD60 *self, hkTransform *out);    /* 0x0c */
    void *slot4;
    void (*begin)(Obj_82CEFD60 *self);                 /* 0x14 */
    void *slot6;
    void *slot7;
    Obj_82CEFD60 *(*next)(Obj_82CEFD60 *self);         /* 0x20 */
} Vtbl_82CEFD60;

struct Obj_82CEFD60 {
    Vtbl_82CEFD60 *vt;
};

extern "C" void fn_82CEFD60(Obj_82CEFD60 *self, hkVector4 *ctx)
{
    hkTransform buf;
    Obj_82CEFD60 *p;

    self->vt->begin(self);
    p = self->vt->next(self);
    while (p != 0) {
        p->vt->getData(p, &buf);
        ctx->setTransformedPos(buf, *ctx);
        p = p->vt->next(p);
    }
}
