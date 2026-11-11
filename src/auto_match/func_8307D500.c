// Scaling matrix from a vector: rows (x,0,0,0), (0,y,0,0), (0,0,z,0), (0,0,0,1).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

#define VPACK_NORMSHORT2 1

typedef struct Matrix_8307D500 {
    __vector4 r[4];
} Matrix_8307D500;

Matrix_8307D500 fn_8307D500(__vector4 scale)
{
    Matrix_8307D500 m;
    __vector4 zero = __vspltisw(0);

    m.r[0] = __vrlimi(zero, scale, 0x8, 0);
    m.r[1] = __vrlimi(zero, scale, 0x4, 0);
    m.r[2] = __vrlimi(zero, scale, 0x2, 0);
    m.r[3] = __vpermwi(__vupkd3d(zero, VPACK_NORMSHORT2), 171);
    return m;
}
