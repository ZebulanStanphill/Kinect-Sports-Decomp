// Video decoder: in-place horizontal 4-tap filter (-4, 53, 18, -3) of (size + 1) * 8 rows (3 vectors
// apart) of halfword samples, out = (-4*a + 53*s1 + 18*s2 - 3*s3 + rounding) >> shift with sK = the
// row shifted by K samples; one vector per row for size 0, two otherwise. Returns whether any
// result has bits set in its high byte (out of the 0..255 range).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vspltisb(int value);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vadduhm(__vector4 a, __vector4 b);
__vector4 __vsubshs(__vector4 a, __vector4 b);
__vector4 __vslh(__vector4 a, __vector4 b);
__vector4 __vsrah(__vector4 a, __vector4 b);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vcmpgtuhR(__vector4 a, __vector4 b, unsigned int *cr);

int fn_830DD058(__vector4 *rows, int size, int unused, __vector4 shift, __vector4 rounding)
{
    __vector4 high = __vslh(__vspltish(-1), __vspltish(8));
    __vector4 zero = __vspltisb(0);
    __vector4 one = __vspltish(1);
    __vector4 two = __vspltish(2);
    __vector4 four = __vspltish(4);
    __vector4 five = __vspltish(5);
    __vector4 acc = __vspltish(0);
    int n = (size + 1) << 3;
    __vector4 *p = rows;
    unsigned int cr;
    int i;

    if (size == 0) {
        for (i = 0; i < n; i++) {
            __vector4 a = p[0];
            __vector4 b = p[1];
            __vector4 s1 = __vsldoi(a, b, 2);
            __vector4 s2 = __vsldoi(a, b, 4);
            __vector4 s3 = __vsldoi(a, b, 6);
            __vector4 t0 = __vsubshs(zero, __vslh(a, two));
            __vector4 t1 = __vadduhm(__vadduhm(__vslh(s1, two), s1), __vadduhm(__vslh(s1, four), __vslh(s1, five)));
            __vector4 t2 = __vadduhm(__vslh(s2, one), __vslh(s2, four));
            __vector4 t3 = __vsubshs(s3, __vslh(s3, two));
            __vector4 r = __vsrah(__vadduhm(__vadduhm(__vadduhm(t1, t2), rounding), __vadduhm(t3, t0)), shift);
            p[0] = r;
            acc = __vor(acc, r);
            p += 3;
        }
    } else {
        for (i = 0; i < n; i++) {
            __vector4 a = p[0];
            __vector4 b = p[1];
            __vector4 c = p[2];
            __vector4 r0, r1;
            {
                __vector4 s1 = __vsldoi(a, b, 2);
                __vector4 s2 = __vsldoi(a, b, 4);
                __vector4 s3 = __vsldoi(a, b, 6);
                __vector4 t0 = __vsubshs(zero, __vslh(a, two));
                __vector4 t1 = __vadduhm(__vadduhm(__vslh(s1, two), s1), __vadduhm(__vslh(s1, four), __vslh(s1, five)));
                __vector4 t2 = __vadduhm(__vslh(s2, one), __vslh(s2, four));
                __vector4 t3 = __vsubshs(s3, __vslh(s3, two));
                r0 = __vsrah(__vadduhm(__vadduhm(__vadduhm(t1, t2), rounding), __vadduhm(t3, t0)), shift);
            }
            {
                __vector4 s1 = __vsldoi(b, c, 2);
                __vector4 s2 = __vsldoi(b, c, 4);
                __vector4 s3 = __vsldoi(b, c, 6);
                __vector4 t0 = __vsubshs(zero, __vslh(b, two));
                __vector4 t1 = __vadduhm(__vadduhm(__vslh(s1, two), s1), __vadduhm(__vslh(s1, four), __vslh(s1, five)));
                __vector4 t2 = __vadduhm(__vslh(s2, one), __vslh(s2, four));
                __vector4 t3 = __vsubshs(s3, __vslh(s3, two));
                r1 = __vsrah(__vadduhm(__vadduhm(__vadduhm(t1, t2), rounding), __vadduhm(t3, t0)), shift);
            }
            acc = __vor(acc, r0);
            p[0] = r0;
            p[1] = r1;
            acc = __vor(acc, r1);
            p += 3;
        }
    }
    __vcmpgtuhR(__vand(acc, high), zero, &cr);
    return (cr & 0x20) == 0;
}
