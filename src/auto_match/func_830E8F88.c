typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4]; /* 0x0 */
} __vector4;

extern __vector4 __vsplth(__vector4, unsigned int);
extern void fn_830E5E70(void *, int, void *, int, int, int, __vector4);

void fn_830E8F88(void *source, int sourceStride, void *destination, int destinationStride, int unused5,
                 int unused6, unsigned char shift, int scale, int enabled)
{
    __vector4 rounding;
    *(int *)&rounding = 8 - shift;
    fn_830E5E70(source, sourceStride, destination, destinationStride, 4 << scale,
                1 << (2 + ((!enabled) & scale)), __vsplth(rounding, 1));
}
