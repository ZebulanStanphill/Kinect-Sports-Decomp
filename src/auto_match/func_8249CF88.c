typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int index);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 value, unsigned int index);
__vector4 __vmulfp(__vector4 first, __vector4 second);
extern double fabs(double value);
extern float lbl_8218E8E8;
extern void *fn_8225F160(void);
extern int fn_8225F3C0(void *self);
extern __vector4 *fn_8249D008(__vector4 *out, const float *bounds, int side);

static __forceinline __vector4 *Build_8249CF88(__vector4 *out, const float *bounds)
{
    float extent = (float)fabs((bounds[1] - bounds[3]) * lbl_8218E8E8 + bounds[3]);
    *out = __vmulfp(__VMXGetReg(68), __vspltw(__lvlx(&extent, 0), 0));
    return out;
}

__vector4 *fn_8249CF88(__vector4 *out, const float *bounds, int side)
{
    if (fn_8225F3C0(fn_8225F160()) <= 1) {
        return Build_8249CF88(out, bounds);
    }
    fn_8249D008(out, bounds, side);
    return out;
}
