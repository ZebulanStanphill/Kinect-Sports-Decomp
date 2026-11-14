/* Havok: zero 3x3 matrix getter (the object is not read); the columns are hkVector4::setZero4 (vxor of an
   uninitialised local). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Matrix3_82D9D3F8 {
    __vector4 col[3];
} Matrix3_82D9D3F8;

void fn_82D9D3F8(void *self, Matrix3_82D9D3F8 *m)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    m->col[0] = zero;
    m->col[1] = zero;
    m->col[2] = zero;
}
