// Havok shape centre: (a + b) * 0.5, the half splatted with __lvlx/__vspltw (hkSimdReal)
// straight from its pooled constant.

#include "xdk/vectorintrinsics.h"

typedef struct Shape_82D3BD70 {
    char pad00[0x20];
    __vector4 a;
    __vector4 b;
} Shape_82D3BD70;

static __forceinline __vector4 SimdReal(float r)
{
    return __vspltw(__lvlx(&r, 0), 0);
}

void fn_82D3BD70(const Shape_82D3BD70 *self, __vector4 *out)
{
    *out = __vmulfp(__vaddfp(self->a, self->b), SimdReal(0.5f));
}
