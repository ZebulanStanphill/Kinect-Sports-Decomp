typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);
}

class hkBool {
public:
    hkBool(bool b) { m_bool = (char)b; }
    operator bool() const { return m_bool != 0; }
    char m_bool;
};

extern "C" const __vector4 lbl_8323B330[];

static __forceinline int AllAreSet(__vector4 c, int mask)
{
    unsigned int cr;
    __vcmpequwR(__vor(c, lbl_8323B330[mask]), __vspltisw(-1), &cr);
    return cr & 0x80;
}

extern "C" hkBool fn_83083C88(const __vector4 *a, const __vector4 *b, int mask)
{
    __vector4 zero, d;
    int i;
    hkBool ret = true;
    hkBool result = true;

    zero = __vxor(zero, zero);
    for (i = 0; i < 3; i++) {
        d = __vsubfp(b[i], a[i]);
        hkBool same = AllAreSet(__vcmpgtfp(zero, d), mask) || AllAreSet(__vcmpeqfp(zero, d), mask) ||
            AllAreSet(__vcmpgtfp(d, zero), mask);
        result = result && same;
    }
    ret = result;
    return ret;
}
