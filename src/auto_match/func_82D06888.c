#include "xdk/vectorintrinsics.h"

typedef struct Matrix4_82D06888 {
    __vector4 col[4];
} Matrix4_82D06888;

static __forceinline void Sub4(__vector4 *self, const __vector4 *v)
{
    *self = __vsubfp(*self, *v);
}

void fn_82D06888(Matrix4_82D06888 *self, const Matrix4_82D06888 *other)
{
    Sub4(&self->col[0], &other->col[0]);
    Sub4(&self->col[1], &other->col[1]);
    Sub4(&self->col[2], &other->col[2]);
    Sub4(&self->col[3], &other->col[3]);
}
