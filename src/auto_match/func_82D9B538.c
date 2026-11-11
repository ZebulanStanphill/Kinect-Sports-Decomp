// Havok: inverse diagonal inertia: out = diag(1 / max(FLT_EPSILON, inertia.xyz)); the zero column is
// hkVector4::setZero4 (vxor of an uninitialised local).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Matrix3_82D9B538 {
    __vector4 col[3];
} Matrix3_82D9B538;

typedef struct Body_82D9B538 {
    char pad00[0xc0];
    __vector4 inertia;               // 0xc0
} Body_82D9B538;

void fn_82D9B538(const Body_82D9B538 *self, Matrix3_82D9B538 *out)
{
    __vector4 t;
    __vector4 eps;
    __vector4 d;
    __vector4 zero;

    t.vector4_f32[0] = 1.192092896e-07f;
    eps = __vspltw(t, 0);
    d = __vmaxfp(eps, self->inertia);
    zero = __vxor(zero, zero);
    out->col[0] = zero;
    out->col[1] = zero;
    out->col[2] = zero;
    out->col[0].vector4_f32[0] = 1.0f / d.vector4_f32[0];
    out->col[1].vector4_f32[1] = 1.0f / d.vector4_f32[1];
    out->col[2].vector4_f32[2] = 1.0f / d.vector4_f32[2];
}
