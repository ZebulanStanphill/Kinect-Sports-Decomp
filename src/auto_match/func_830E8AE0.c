/* Video decoder: adds an 8x8 block of halfword residuals to 8 rows of 8 pixels (saturating to unsigned bytes).
   Rows that are not 16-byte aligned as a whole (stride not a multiple of 16) go to the unaligned version. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisb(int value);
__vector4 __vmrghb(__vector4 a, __vector4 b);
__vector4 __vmrglb(__vector4 a, __vector4 b);
__vector4 __vaddshs(__vector4 a, __vector4 b);
__vector4 __vpkshus(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

extern void fn_830E8958(unsigned char *dst, const __vector4 *block, int stride);

void fn_830E8AE0(unsigned char *dst, const __vector4 *block, int stride)
{
    __vector4 zero = __vspltisb(0);
    __vector4 r0, r1, r2, r3, r4, r5, r6, r7;

    if ((stride & 15) != 0) {
        fn_830E8958(dst, block, stride);
        return;
    }
    r0 = *(const __vector4 *)(dst);
    r1 = *(const __vector4 *)(dst + stride);
    r2 = *(const __vector4 *)(dst + 2 * stride);
    r3 = *(const __vector4 *)(dst + 3 * stride);
    r4 = *(const __vector4 *)(dst + 4 * stride);
    r5 = *(const __vector4 *)(dst + 5 * stride);
    r6 = *(const __vector4 *)(dst + 6 * stride);
    r7 = *(const __vector4 *)(dst + 7 * stride);
    if (((int)dst & 15) == 0) {
        r0 = __vmrghb(zero, r0);
        r1 = __vmrghb(zero, r1);
        r2 = __vmrghb(zero, r2);
        r3 = __vmrghb(zero, r3);
        r4 = __vmrghb(zero, r4);
        r5 = __vmrghb(zero, r5);
        r6 = __vmrghb(zero, r6);
        r7 = __vmrghb(zero, r7);
    } else {
        r0 = __vmrglb(zero, r0);
        r1 = __vmrglb(zero, r1);
        r2 = __vmrglb(zero, r2);
        r3 = __vmrglb(zero, r3);
        r4 = __vmrglb(zero, r4);
        r5 = __vmrglb(zero, r5);
        r6 = __vmrglb(zero, r6);
        r7 = __vmrglb(zero, r7);
    }
    r0 = __vaddshs(r0, block[0]);
    r0 = __vpkshus(r0, r0);
    r1 = __vaddshs(r1, block[1]);
    r1 = __vpkshus(r1, r1);
    r2 = __vaddshs(r2, block[2]);
    r2 = __vpkshus(r2, r2);
    r3 = __vaddshs(r3, block[3]);
    r3 = __vpkshus(r3, r3);
    r4 = __vaddshs(r4, block[4]);
    r4 = __vpkshus(r4, r4);
    r5 = __vaddshs(r5, block[5]);
    r5 = __vpkshus(r5, r5);
    r6 = __vaddshs(r6, block[6]);
    r6 = __vpkshus(r6, r6);
    r7 = __vaddshs(r7, block[7]);
    r7 = __vpkshus(r7, r7);
    __stvewx(r0, dst, 0);
    __stvewx(r0, dst, 4);
    __stvewx(r1, dst + stride, 0);
    __stvewx(r1, dst + stride, 4);
    __stvewx(r2, dst + 2 * stride, 0);
    __stvewx(r2, dst + 2 * stride, 4);
    __stvewx(r3, dst + 3 * stride, 0);
    __stvewx(r3, dst + 3 * stride, 4);
    __stvewx(r4, dst + 4 * stride, 0);
    __stvewx(r4, dst + 4 * stride, 4);
    __stvewx(r5, dst + 5 * stride, 0);
    __stvewx(r5, dst + 5 * stride, 4);
    __stvewx(r6, dst + 6 * stride, 0);
    __stvewx(r6, dst + 6 * stride, 4);
    __stvewx(r7, dst + 7 * stride, 0);
    __stvewx(r7, dst + 7 * stride, 4);
}
