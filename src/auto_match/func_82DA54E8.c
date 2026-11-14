typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

double __fsel(double a, double b, double c);
__vector4 __vxor(__vector4 a, __vector4 b);

static __forceinline float max2(float x, float y) { return (float)__fsel(x - y, x, y); }

typedef struct Matrix3_82DA54E8 {
    __vector4 col[3];
} Matrix3_82DA54E8;

typedef struct Obj_82DA54E8 {
    char pad[0xc0];
    float value; /* 0xc0 */
} Obj_82DA54E8;

/* out = identity / max(value, FLT_EPSILON) */
void fn_82DA54E8(const Obj_82DA54E8 *self, Matrix3_82DA54E8 *out)
{
    float d = 1.0f / max2(1.1920929e-7f, self->value);
    __vector4 zero;
    zero = __vxor(zero, zero);
    out->col[0] = zero;
    out->col[1] = zero;
    out->col[2] = zero;
    out->col[0].vector4_f32[0] = d;
    out->col[1].vector4_f32[1] = d;
    out->col[2].vector4_f32[2] = d;
}
