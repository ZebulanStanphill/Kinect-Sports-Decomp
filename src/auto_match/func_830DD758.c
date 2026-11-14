typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vsubshs(__vector4 a, __vector4 b);
__vector4 __vslh(__vector4 a, __vector4 b);

typedef struct Tables_830DD758 {
    char pad0[0x460];
    __vector4 bias; /* 0x460 */
} Tables_830DD758;

extern void fn_830DC560(const unsigned char *src, int stride, __vector4 *rows, int size, int mode);
extern int fn_830DD058(__vector4 *rows, int size, int unused, __vector4 shift, __vector4 rounding);

/* video decoder: unpacks the block one sample to the left into halfword rows,
   then runs the horizontal 4-tap filter with rounding 32 - bias */
void fn_830DD758(const unsigned char *src, int stride, __vector4 *rows, Tables_830DD758 *tables, int size)
{
    __vector4 rounding = __vsubshs(__vslh(__vspltish(8), __vspltish(2)), tables->bias);
    fn_830DC560(src - 1, stride, rows, size, 0);
    fn_830DD058(rows, size, 0, __vspltish(6), rounding);
}
