#include "xdk/vectorintrinsics.h"

typedef struct Self_82DA0080 {
    char pad0[0x20];
    __vector4 axis;     /* 0x20 */
} Self_82DA0080;

typedef struct Body_82DA0080 {
    char pad0[0x10];
    __vector4 v;        /* 0x10 */
} Body_82DA0080;

/* Havok (caller fn_82DC7828, beside Matching fn_82DA0450): out += axis - axis * dot3(axis, body->v). */
void fn_82DA0080(Self_82DA0080 *self, Body_82DA0080 *body, void *b, void *c, void *d, __vector4 *out)
{
    __vector4 axis = self->axis;
    __vector4 dot = __vmsum3fp(axis, body->v);
    *out = __vaddfp(*out, __vsubfp(axis, __vmulfp(axis, dot)));
}
