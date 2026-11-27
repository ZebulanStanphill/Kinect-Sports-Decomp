#include "xdk/vectorintrinsics.h"

typedef struct Matrix_82532C90 {
    __vector4 r[4];
} Matrix_82532C90;

typedef struct Matrices_82532C90 {
    const Matrix_82532C90 *base;         /* 0x0 */
    const Matrix_82532C90 *overrideBase; /* 0x4 */
} Matrices_82532C90;

static __forceinline Matrix_82532C90 Transpose(const Matrix_82532C90 *m)
{
    Matrix_82532C90 p;
    Matrix_82532C90 mt;
    __vector4 r0 = m->r[0];
    __vector4 r2 = m->r[2];
    __vector4 r3 = m->r[3];
    __vector4 r1 = m->r[1];

    p.r[0] = __vmrghw(r0, r2);
    p.r[2] = __vmrglw(r0, r2);
    p.r[1] = __vmrghw(r1, r3);
    p.r[3] = __vmrglw(r1, r3);
    mt.r[0] = __vmrghw(p.r[0], p.r[1]);
    mt.r[1] = __vmrglw(p.r[0], p.r[1]);
    mt.r[2] = __vmrghw(p.r[2], p.r[3]);
    mt.r[3] = __vmrglw(p.r[2], p.r[3]);
    return mt;
}

/* The override array when there is one, else the base array. */
static __forceinline const Matrix_82532C90 *Base(const Matrices_82532C90 *self)
{
    if (self->overrideBase != 0) {
        return self->overrideBase;
    }
    return self->base;
}

/* Returns the transpose of matrix `index`. */
void fn_82532C90(Matrix_82532C90 *out, const Matrices_82532C90 *self, unsigned int index)
{
    Matrix_82532C90 m = Base(self)[index];
    Matrix_82532C90 t = Transpose(&m);
    out->r[0] = t.r[0];
    out->r[1] = t.r[1];
    out->r[2] = t.r[2];
    out->r[3] = t.r[3];
}
