typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, int element);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Plane_82F5E840 {
    __vector4 normal;
    float distance;
} Plane_82F5E840;

extern float fn_82F534A0(__vector4 a, __vector4 b);

/* Projects a point onto a plane: point - normal * (dot(normal, point) + distance). */
__vector4 *fn_82F5E840(__vector4 *out, const Plane_82F5E840 *plane, __vector4 point)
{
    float t = fn_82F534A0(plane->normal, point) + plane->distance;
    __vector4 scale = __vspltw(__lvlx(&t, 0), 0);
    *out = __vsubfp(point, __vmulfp(plane->normal, scale));
    return out;
}
