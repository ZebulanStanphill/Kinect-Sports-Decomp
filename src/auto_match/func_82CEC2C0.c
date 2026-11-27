#include "xdk/vectorintrinsics.h"

typedef struct Matrix3_82CEC2C0 {
    __vector4 col[3];
} Matrix3_82CEC2C0;

static __forceinline void Add4(__vector4 *self, const __vector4 *v)
{
    *self = __vaddfp(*self, *v);
}

void fn_82CEC2C0(Matrix3_82CEC2C0 *self, const Matrix3_82CEC2C0 *other)
{
    Add4(&self->col[0], &other->col[0]);
    Add4(&self->col[1], &other->col[1]);
    Add4(&self->col[2], &other->col[2]);
}
