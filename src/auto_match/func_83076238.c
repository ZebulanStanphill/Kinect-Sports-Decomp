typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

#define VPACK_NORMSHORT2 1

__vector4 __vspltisw(int value);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vpermwi(__vector4 v, int control);

extern float lbl_82006848;
extern unsigned char fn_83076080(__vector4 a, __vector4 b, float epsilon); /* near-equal */
extern float fn_8306E9B8(float x);                                         /* acos */

float fn_83076238(__vector4 q)
{
    __vector4 identity = __vpermwi(__vupkd3d(__vspltisw(0), VPACK_NORMSHORT2), 171);

    if (fn_83076080(q, identity, lbl_82006848)) {
        return 0.0f;
    }
    return fn_8306E9B8(q.vector4_f32[3]) * 2.0f;
}
