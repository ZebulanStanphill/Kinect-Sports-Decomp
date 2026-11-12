// Remaps packed 16-bit indices after two entries were removed: every component greater than the
// first (second) removed index is decremented once (twice). Components 0-3 hold (a, b) pairs,
// 4-5 a third stream, 6-7 are left untouched.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vcmpgtuh(__vector4 a, __vector4 b);
__vector4 __vadduhm(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);

typedef __declspec(align(16)) union Words_8308A4D8 {
    unsigned short u16[8];
    unsigned int u32[4];
    int i32[4];
    __vector4 v;
} Words_8308A4D8;

void fn_8308A4D8(void *self, __vector4 *data, int count, const unsigned short *removed)
{
    Words_8308A4D8 first, second, mask;
    __vector4 *end = data + count;
    __vector4 *p;

    first.i32[3] = -1;
    first.u16[4] = removed[4];
    first.u16[5] = removed[4];
    first.u16[0] = removed[0];
    first.u16[2] = removed[0];
    first.u16[1] = removed[1];
    first.u16[3] = removed[1];
    second.u16[4] = removed[5];
    second.u16[5] = removed[5];
    second.u16[0] = removed[2];
    second.u16[2] = removed[2];
    second.u16[1] = removed[3];
    second.u16[3] = removed[3];
    second.i32[3] = -1;
    mask.u32[0] = 0xffffffff;
    mask.u32[1] = 0xffffffff;
    mask.u32[2] = 0xffffffff;
    mask.u32[3] = 0;
    for (p = data; p < end; p++) {
        __vector4 v = *p;

        *p = __vadduhm(v, __vand(__vadduhm(__vcmpgtuh(v, first.v), __vcmpgtuh(v, second.v)), mask.v));
    }
}
