// Havok: set a 3x3 matrix to max(m00, m11, m22) * identity; the zero columns are
// hkVector4::setZero4 (vxor of an uninitialised local).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

double __fsel(double a, double b, double c);
__vector4 __vxor(__vector4 a, __vector4 b);

static __forceinline float max2(float x, float y) { return (float)__fsel(x - y, x, y); }

typedef struct Matrix3_82DE5768 {
    __vector4 col[3];
} Matrix3_82DE5768;

void fn_82DE5768(Matrix3_82DE5768 *m)
{
    float t = max2(max2(m->col[0].vector4_f32[0], m->col[1].vector4_f32[1]), m->col[2].vector4_f32[2]);
    __vector4 zero;
    zero = __vxor(zero, zero);
    m->col[0] = zero;
    m->col[1] = zero;
    m->col[2] = zero;
    m->col[0].vector4_f32[0] = t;
    m->col[1].vector4_f32[1] = t;
    m->col[2].vector4_f32[2] = t;
}
