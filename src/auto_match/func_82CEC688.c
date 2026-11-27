#include "xdk/vectorintrinsics.h"

typedef struct Matrix3_82CEC688 {
    __vector4 col[3];
} Matrix3_82CEC688;

/* this = a * b, column by column */
void fn_82CEC688(Matrix3_82CEC688 *self, const Matrix3_82CEC688 *a, const Matrix3_82CEC688 *b)
{
    __vector4 c0 = a->col[0];
    __vector4 c1 = a->col[1];
    __vector4 c2 = a->col[2];
    int i;

    for (i = 2; i >= 0; i--) {
        __vector4 bx = __vspltw(b->col[i], 0);
        __vector4 by = __vspltw(b->col[i], 1);
        __vector4 bz = __vspltw(b->col[i], 2);
        __vector4 t = __vmulfp(c0, bx);
        t = __vmaddfp(c1, by, t);
        self->col[i] = __vmaddfp(c2, bz, t);
    }
}
