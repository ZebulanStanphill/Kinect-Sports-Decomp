

/* (0.5, 0.5, 0.5, 0.5) */

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82132D70;
/* 0x7FFFFFFF in every lane: clears the sign bits */
extern const __vector4 lbl_821CA820;

typedef struct Bounds_82D1D610 {
    __vector4 m_min; /* 0x0 */
    __vector4 m_max; /* 0x10 */
} Bounds_82D1D610;

/* Turns the box into a cube around the same centre whose half size is the largest half extent. */
void fn_82D1D610(Bounds_82D1D610 *self)
{
    __vector4 halfExtents = __vmulfp(lbl_82132D70, __vsubfp(self->m_max, self->m_min));
    __vector4 center = __vmulfp(lbl_82132D70, __vaddfp(self->m_min, self->m_max));
    __vector4 absHalf = __vand(halfExtents, lbl_821CA820);
    __vector4 radius;
    int axis;
    float r;

    if (absHalf.vector4_f32[0] < absHalf.vector4_f32[1]) {
        axis = absHalf.vector4_f32[1] < absHalf.vector4_f32[2] ? 2 : 1;
    } else {
        axis = absHalf.vector4_f32[0] < absHalf.vector4_f32[2] ? 2 : 0;
    }
    r = halfExtents.vector4_f32[axis];
    radius.vector4_f32[0] = r;
    radius.vector4_f32[1] = r;
    radius.vector4_f32[2] = r;
    radius.vector4_f32[3] = 0.0f;
    self->m_min = __vsubfp(center, radius);
    self->m_max = __vaddfp(center, radius);
}
