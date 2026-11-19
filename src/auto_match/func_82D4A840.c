/* Havok: grows an AABB by the point (a * b, componentwise) transformed by the transform
   (fn_82CE5040). */
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);

typedef struct Aabb_82D4A840 {
    __vector4 minimum; /* 0x00 */
    __vector4 maximum; /* 0x10 */
} Aabb_82D4A840;

extern void fn_82CE5040(__vector4 *out, const void *transform, const __vector4 *point);

static __forceinline void SetVector(__vector4 *v, float x, float y, float z, float w)
{
    __vector4 t;

    t.f[0] = x;
    t.f[1] = y;
    t.f[2] = z;
    t.f[3] = w;
    *v = t;
}

void fn_82D4A840(Aabb_82D4A840 *aabb, const void *transform, const float *a, const float *b)
{
    __vector4 point;
    __vector4 transformed;

    SetVector(&point, a[0] * b[0], a[1] * b[1], a[2] * b[2], 0.0f);
    fn_82CE5040(&transformed, transform, &point);
    aabb->minimum = __vminfp(aabb->minimum, transformed);
    aabb->maximum = __vmaxfp(aabb->maximum, transformed);
}
