typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef union VectorBits_8307F7E0 {
    __vector4 v;
    unsigned int u[4];
} VectorBits_8307F7E0;

extern const __vector4 lbl_82186EE0; /* scale */
extern const __vector4 lbl_82186EF0; /* bias: puts the value in bits 6..13 */

/* Packs four components into one byte each (x in the low byte). */
unsigned int fn_8307F7E0(const __vector4 *value)
{
    VectorBits_8307F7E0 bits;

    bits.v = __vmaddfp(*value, lbl_82186EE0, lbl_82186EF0);
    return ((bits.u[3] >> 6 & 0xff) << 24) | ((bits.u[2] >> 6 & 0xff) << 16) |
           ((bits.u[1] >> 6 & 0xff) << 8) | (bits.u[0] >> 6 & 0xff);
}
