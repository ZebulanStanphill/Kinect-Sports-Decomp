typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

static __forceinline float GetReal(__vector4 v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

static __forceinline __vector4 Replicate(const float *value)
{
    return __vspltw(__lvlx(value, 0), 0);
}

int fn_8309AB08(const __vector4 *a0, const __vector4 *b0, const __vector4 *n0,
                const __vector4 *a1, const __vector4 *b1, const __vector4 *n1,
                float minDot, float maxDistSq)
{
    __vector4 da, db, r;

    if (GetReal(__vmsum3fp(*n0, *n1)) < minDot) {
        return 0;
    }
    da = __vsubfp(*a1, *a0);
    db = __vsubfp(*b1, *b0);
    r = Replicate(&maxDistSq);
    if (GetReal(__vmsum3fp(da, da)) > GetReal(r)) {
        return 0;
    }
    if (GetReal(__vmsum3fp(db, db)) > GetReal(r)) {
        return 0;
    }
    return 1;
}
