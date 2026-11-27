#include "xdk/vectorintrinsics.h"

typedef struct Shape_82D43FA8 Shape_82D43FA8;
typedef struct VTable_82D43FA8 {
    void *pad[0xe];
    void (*getSupportingVertex)(Shape_82D43FA8 *, __vector4 *, __vector4 *);
} VTable_82D43FA8;
struct Shape_82D43FA8 { VTable_82D43FA8 *vt; int pad[3]; float radius; };

float fn_82D43FA8(Shape_82D43FA8 *self, __vector4 *dir)
{
    __vector4 v;
    float r;
    self->vt->getSupportingVertex(self, dir, &v);
    __stvewx(__vmsum3fp(v, *dir), &r, 0);
    return self->radius + r;
}
