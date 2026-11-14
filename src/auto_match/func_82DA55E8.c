/* Havok: diagonal 3x3 matrix with one scalar of the object (offset 0xc0) on the diagonal; the zero columns are
   hkVector4::setZero4 (vxor of an uninitialised local). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Matrix3_82DA55E8 {
    __vector4 col[3];
} Matrix3_82DA55E8;

typedef struct Object_82DA55E8 {
    char pad[0xc0];
    float value;
} Object_82DA55E8;

void fn_82DA55E8(Object_82DA55E8 *self, Matrix3_82DA55E8 *m)
{
    float t = self->value;
    __vector4 zero;
    zero = __vxor(zero, zero);
    m->col[0] = zero;
    m->col[1] = zero;
    m->col[2] = zero;
    m->col[0].vector4_f32[0] = t;
    m->col[1].vector4_f32[1] = t;
    m->col[2].vector4_f32[2] = t;
}
