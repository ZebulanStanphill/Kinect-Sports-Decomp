// Havok hkpTriangleShape centre: (a + b + c) * (1/3); the third is splatted with __lvlx/__vspltw
// (hkSimdReal) straight from its pooled constant.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *p, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct TriangleShape_82D523B8 {
    char pad00[0x20];
    __vector4 a;
    __vector4 b;
    __vector4 c;
} TriangleShape_82D523B8;

static __forceinline __vector4 SimdReal(float r)
{
    return __vspltw(__lvlx(&r, 0), 0);
}

void fn_82D523B8(const TriangleShape_82D523B8 *self, __vector4 *out)
{
    *out = __vaddfp(self->a, self->b);
    *out = __vaddfp(*out, self->c);
    *out = __vmulfp(*out, SimdReal(1.0f / 3.0f));
}
