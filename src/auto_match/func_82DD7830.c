typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
    float w; /* 0xc */
} __vector4;

extern __vector4 __vsubfp(__vector4, __vector4);
extern __vector4 __vmsum3fp(__vector4, __vector4);
extern void __stvewx(__vector4, void *, int);

unsigned int fn_82DD7830(char *self, const unsigned char *pair, __vector4 *out)
{
    __vector4 *first = (__vector4 *)(self + pair[4]);
    __vector4 difference = __vsubfp(*first, *(__vector4 *)(self + pair[5]));
    __vector4 square = __vmsum3fp(difference, difference);
    float distance;
    __stvewx(square, &distance, 0);
    if (distance > *(float *)(self + 0x11c)) {
        return 1;
    }
    out[1] = difference;
    out[2] = *(__vector4 *)(self + 0x100);
    out[0] = *first;
    return 0;
}
