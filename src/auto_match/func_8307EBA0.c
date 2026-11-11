typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Aabb_8307EBA0 {
    __vector4 min;
    __vector4 max;
} Aabb_8307EBA0;




static __forceinline void SetAll(__vector4 *v, float x)
{
    v->vector4_f32[0] = x;
    *v = __vspltw(*v, 0);
}

void fn_8307EBA0(const __vector4 *points, int count, Aabb_8307EBA0 *out)
{
    __vector4 lo, hi, zero;
    int i;

    if (count == 0) {
        Aabb_8307EBA0 *o = out;
        SetAll(&o->min, 3.40282e+38f);
        SetAll(&o->max, -3.40282e+38f);
        return;
    }
    lo = points[0];
    hi = lo;
    for (i = 1; i < count; i++) {
        lo = __vminfp(lo, points[i]);
        hi = __vmaxfp(hi, points[i]);
    }
    zero = __vspltisw(0);
    lo = __vrlimi(lo, zero, 1, 0);
    hi = __vrlimi(hi, zero, 1, 0);
    out->min = lo;
    out->max = hi;
}
