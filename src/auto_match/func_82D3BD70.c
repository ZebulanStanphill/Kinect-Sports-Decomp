// Havok shape centre: (a + b) * 0.5, the half splatted with __lvlx/__vspltw (hkSimdReal)
// straight from its pooled constant.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *p, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);

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
