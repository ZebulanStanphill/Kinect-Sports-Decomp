/* Havok: sets the first rotation to identity (inlined hkMatrix3::setIdentity: zero columns via setZero4, then
   the diagonal 1.0f) and the second from a quaternion (fn_82CE6010, hkRotation::set). */

#include "xdk/vectorintrinsics.h"

typedef struct { __vector4 col[3]; } Rotation_82DA2508;

typedef struct Pair_82DA2508 {
    char pad[0x20];
    Rotation_82DA2508 a;
    Rotation_82DA2508 b;
} Pair_82DA2508;

extern void fn_82CE6010(Rotation_82DA2508 *self, const __vector4 *q);

static __forceinline void SetIdentity(Rotation_82DA2508 *m)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    m->col[0] = zero;
    m->col[1] = zero;
    m->col[2] = zero;
    m->col[0].vector4_f32[0] = 1.0f;
    m->col[1].vector4_f32[1] = 1.0f;
    m->col[2].vector4_f32[2] = 1.0f;
}
void fn_82DA2508(Pair_82DA2508 *self, const __vector4 *q)
{
    SetIdentity(&self->a);
    fn_82CE6010(&self->b, q);
}
