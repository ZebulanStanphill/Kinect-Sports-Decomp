typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);

typedef struct Float3_827EB678 {
    float x, y, z;
} Float3_827EB678;

typedef struct Plane_827EB678 {
    float a, b, c, d;
} Plane_827EB678;

typedef struct Frustum_827EB678 {
    char pad0[0x48];
    Plane_827EB678 planes[6];   /* 0x48 */
} Frustum_827EB678;

static __forceinline int AllTrue(__vector4 v)
{
    unsigned int cr = 0;
    __vcmpequwR(v, __vspltisw(-1), &cr);
    return (cr & 0x80) != 0;
}

int fn_827EB678(const Frustum_827EB678 *frustum, const Float3_827EB678 *min, const Float3_827EB678 *max)
{
    __vector4 planes[6];
    __vector4 lo;
    __vector4 hi;
    __vector4 zero;
    __vector4 outside;
    __vector4 inside;
    int i;

    zero = __vspltisw(0);
    lo.vector4_f32[0] = min->x;
    lo.vector4_f32[1] = min->y;
    lo.vector4_f32[2] = min->z;
    lo.vector4_f32[3] = 1.0f;
    hi.vector4_f32[0] = max->x;
    hi.vector4_f32[1] = max->y;
    hi.vector4_f32[2] = max->z;
    hi.vector4_f32[3] = 1.0f;
    outside = zero;
    inside = zero;
    for (i = 0; i < 6; i++) {
        __vector4 p;
        p.vector4_f32[0] = frustum->planes[i].a;
        p.vector4_f32[1] = frustum->planes[i].b;
        p.vector4_f32[2] = frustum->planes[i].c;
        p.vector4_f32[3] = -frustum->planes[i].d;
        planes[i] = p;
    }
    for (i = 0; i < 6; i++) {
        __vector4 mask = __vcmpgtfp(planes[i], zero);
        __vector4 nearPoint = __vsel(hi, lo, mask);
        __vector4 farPoint = __vsel(lo, hi, mask);
        outside = __vor(outside, __vcmpgtfp(__vmsum4fp(planes[i], nearPoint), zero));
        inside = __vor(inside, __vcmpgtfp(__vmsum4fp(planes[i], farPoint), zero));
    }
    if (AllTrue(outside))
        return 0;
    if (AllTrue(inside))
        return 1;
    return 2;
}
