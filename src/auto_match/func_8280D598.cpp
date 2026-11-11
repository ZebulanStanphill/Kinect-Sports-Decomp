// Look-at matrix from three unaligned float3 values: XNA Math's XMMatrixLookAtRH shape,
// fn_82273A20(eye, eye - focus, up) being XMMatrixLookToLH. The result is copied row by row.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
}

struct Float3_8280D598 {
    float x, y, z;
};

struct Matrix_8280D598 {
    __vector4 r[4];

    __forceinline Matrix_8280D598 &operator=(const Matrix_8280D598 &m)
    {
        __vector4 r0 = m.r[0];
        __vector4 r1 = m.r[1];
        __vector4 r2 = m.r[2];
        __vector4 r3 = m.r[3];

        r[0] = r0;
        r[1] = r1;
        r[2] = r2;
        r[3] = r3;
        return *this;
    }
};

extern "C" Matrix_8280D598 fn_82273A20(__vector4 eye, __vector4 direction, __vector4 up);

static __forceinline __vector4 LoadFloat3(const Float3_8280D598 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

extern "C" void fn_8280D598(Matrix_8280D598 *result, const Float3_8280D598 *eye,
                            const Float3_8280D598 *up, const Float3_8280D598 *focus)
{
    __vector4 e = LoadFloat3(eye);
    __vector4 f = LoadFloat3(focus);
    __vector4 u = LoadFloat3(up);

    *result = fn_82273A20(e, __vsubfp(e, f), u);
}
