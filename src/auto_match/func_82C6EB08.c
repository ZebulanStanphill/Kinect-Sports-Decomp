// dst[i] = saturate(a[i] + b[i] + bias) over count bytes: 16 bytes at a time with
// vaddubs, then the remaining bytes one by one.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltb(__vector4 v, unsigned int i);
__vector4 __vaddubs(__vector4 a, __vector4 b);

void fn_82C6EB08(unsigned char *dst, const unsigned char *a, const unsigned char *b, int count, int bias)
{
    __vector4 vbias;
    int blocks = count >> 4;
    int rest = count & 15;
    int i;

    ((unsigned char *)&vbias)[0] = (unsigned char)bias;
    vbias = __vspltb(vbias, 0);
    for (i = 0; i < blocks; i++) {
        *(__vector4 *)dst = __vaddubs(__vaddubs(*(const __vector4 *)a, *(const __vector4 *)b), vbias);
        dst += 16;
        a += 16;
        b += 16;
    }
    for (i = 0; i < rest; i++) {
        int sum = a[i] + b[i] + bias;
        if (sum > 255) {
            sum = 255;
        }
        dst[i] = (unsigned char)sum;
    }
}
