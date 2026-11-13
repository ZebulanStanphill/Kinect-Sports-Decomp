// Matrix from one unaligned float3 value (fn_8234E338 takes it as a vector); the result is
// copied row by row (same shape as fn_8280D598).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
}

struct Float3_8280D2A0 {
    float x, y, z;
};

struct Matrix_8280D2A0 {
    __vector4 r[4];

    __forceinline Matrix_8280D2A0 &operator=(const Matrix_8280D2A0 &m)
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

extern "C" Matrix_8280D2A0 fn_8234E338(__vector4 v);

static __forceinline __vector4 LoadFloat3(const Float3_8280D2A0 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

extern "C" void fn_8280D2A0(Matrix_8280D2A0 *result, const Float3_8280D2A0 *v)
{
    *result = fn_8234E338(LoadFloat3(v));
}
