#include "xdk/vectorintrinsics.h"

typedef struct Self_82DA00B0 {
    char pad0[0x20];
    __vector4 axis;     /* 0x20 */
} Self_82DA00B0;

typedef struct Body_82DA00B0 {
    char pad0[0x10];
    __vector4 v;        /* 0x10 */
} Body_82DA00B0;

/* Havok (caller fn_82DC8030, beside Matching fn_82D9FFD0): out -= axis - axis * dot3(axis, body->v). */
void fn_82DA00B0(Self_82DA00B0 *self, Body_82DA00B0 *body, float dt, void *c, void *d, void *e, __vector4 *out)
{
    __vector4 axis = self->axis;
    __vector4 dot = __vmsum3fp(axis, body->v);
    *out = __vsubfp(*out, __vsubfp(axis, __vmulfp(axis, dot)));
}
