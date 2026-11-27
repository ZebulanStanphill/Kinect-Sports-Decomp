#include "xdk/vectorintrinsics.h"

typedef struct Matrix_82D9B6F8 {
    __vector4 columns[3];
} Matrix_82D9B6F8;

typedef struct Motion_82D9B6F8 {
    char padding[0x10];
    char m_motionState[0xb0];      /* 0x10 */
    __vector4 m_inertiaAndMassInv; /* 0xc0 */
} Motion_82D9B6F8;

extern const __vector4 lbl_82132DA0;
extern void fn_82CECC38(Matrix_82D9B6F8 *matrix, const void *motionState);

void fn_82D9B6F8(const Motion_82D9B6F8 *self, Matrix_82D9B6F8 *out)
{
    __vector4 zero;
    __vector4 inertia;
    zero = __vxor(zero, zero);
    inertia = __vmaxfp(self->m_inertiaAndMassInv, lbl_82132DA0);
    out->columns[0] = zero;
    out->columns[1] = zero;
    out->columns[0].vector4_f32[0] = 1.0f / inertia.vector4_f32[0];
    out->columns[2] = zero;
    out->columns[1].vector4_f32[1] = 1.0f / inertia.vector4_f32[1];
    out->columns[2].vector4_f32[2] = 1.0f / inertia.vector4_f32[2];
    fn_82CECC38(out, self->m_motionState);
}
