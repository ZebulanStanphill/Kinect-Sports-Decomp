/* Havok: diagonal 3x3 matrix with the three scalars of the object (offset 0xc0) on the diagonal; the zero columns are
   hkVector4::setZero4 (vxor of an uninitialised local). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Matrix3_82D9B600 {
    __vector4 col[3];
} Matrix3_82D9B600;

typedef struct Object_82D9B600 {
    char pad[0xc0];
    float value[3];
} Object_82D9B600;

void fn_82D9B600(Object_82D9B600 *self, Matrix3_82D9B600 *m)
{
    float x = self->value[0];
    float y = self->value[1];
    float z = self->value[2];
    __vector4 zero;
    zero = __vxor(zero, zero);
    m->col[0] = zero;
    m->col[1] = zero;
    m->col[2] = zero;
    m->col[0].vector4_f32[0] = x;
    m->col[1].vector4_f32[1] = y;
    m->col[2].vector4_f32[2] = z;
}
