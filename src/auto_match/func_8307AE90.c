typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef __declspec(align(16)) struct Matrix_8307AE90 {
    __vector4 r[4];
} Matrix_8307AE90;

typedef struct Limb_8307AE90 {
    float angle; /* 0x0 */
    char pad4[0xc - 0x4];
    float stretch; /* 0xc */
} Limb_8307AE90;

__vector4 __vsubfp(__vector4 a, __vector4 b);

extern __vector4 fn_8307D748(Matrix_8307AE90 m, __vector4 v);
extern float fn_8306EB40(__vector4 *out, __vector4 start, __vector4 end, __vector4 point);
extern void fn_8307AC98(unsigned char flag, Limb_8307AE90 *limb, __vector4 offset);

void fn_8307AE90(unsigned char flag, Matrix_8307AE90 transform, __vector4 start, __vector4 end,
                 __vector4 point, Limb_8307AE90 *limb)
{
    __vector4 closest;
    __vector4 a = fn_8307D748(transform, start);
    __vector4 b = fn_8307D748(transform, end);
    float t = fn_8306EB40(&closest, a, b, point);

    closest = __vsubfp(closest, point);
    fn_8307AC98(flag, limb, closest);
    if (t < 0.0f) {
        limb->stretch = limb->stretch - t * 2.0f;
    } else if (t > 1.0f) {
        limb->stretch = (t - 1.0f) * 2.0f + limb->stretch;
    }
}
