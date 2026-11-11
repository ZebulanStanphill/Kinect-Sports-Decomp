// Copies a transform (three rotation columns and a translation) into a 4x4 matrix (output
// first): the columns get w = 0 and the translation gets w = 1 (Havok's (1, 1, 1, 1) constant).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

typedef struct Transform_82CE6578 {
    __vector4 column[3];     // 0x00
    __vector4 translation;   // 0x30
} Transform_82CE6578;

typedef struct Matrix4_82CE6578 {
    __vector4 column[4];     // 0x00
} Matrix4_82CE6578;

extern const __vector4 lbl_82132D10;   // (1, 1, 1, 1)

void fn_82CE6578(Matrix4_82CE6578 *out, const Transform_82CE6578 *self)
{
    __vector4 zero = __vspltisw(0);

    out->column[0] = __vrlimi(self->column[0], zero, 1, 0);
    out->column[1] = __vrlimi(self->column[1], zero, 1, 0);
    out->column[2] = __vrlimi(self->column[2], zero, 1, 0);
    out->column[3] = __vrlimi(self->translation, lbl_82132D10, 1, 0);
}
