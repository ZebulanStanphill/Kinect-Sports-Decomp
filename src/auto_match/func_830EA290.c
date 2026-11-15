typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 __vsplth(__vector4, unsigned int);
extern void fn_830E66B8(const void *, int, void *, int, int, int, __vector4);

void fn_830EA290(const void *source, int sourceStride, void *out, int outStride, int unusedWidth,
                 int unusedHeight, unsigned char depth, int shift, int mode)
{
    __vector4 rounding;
    *(int *)&rounding = 8 - depth;
    fn_830E66B8(source, sourceStride, out, outStride, 4 << shift, 1 << (((mode == 0) & shift) + 2),
                __vsplth(rounding, 1));
}
