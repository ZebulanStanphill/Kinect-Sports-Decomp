/* Pushes the point out of every sphere that contains it: in a frame built from the direction from the anchor to
   the point and the up vector, the point is moved along the third axis (flipped to the side of the point) until it
   lies on the sphere's surface. Returns whether any sphere moved it. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Sphere_83079EE0 {
    __vector4 center;           /* 0x00 */
    float radius;               /* 0x10 */
    char pad14[0xc];
} Sphere_83079EE0;

float fn_8306EE38(__vector4 v);                 /* Length3 */
__vector4 fn_8306EDB0(__vector4 v);             /* Normalize3 */
__vector4 fn_8306ED78(__vector4 a, __vector4 b);   /* Cross3 */
float fn_8306ED98(__vector4 a, __vector4 b);    /* Dot3 */
float fn_8306E7E8(float a, float b);            /* max */
double sqrt(double x);

unsigned char fn_83079EE0(void *self, __vector4 anchor, __vector4 up, __vector4 *point, const Sphere_83079EE0 *spheres, int count)
{
    unsigned char moved = 0;
    int i;

    for (i = 0; i < count; i++) {
        __vector4 d = __vsubfp(*point, spheres[i].center);
        if (fn_8306EE38(d) < spheres[i].radius) {
            __vector4 forward = fn_8306EDB0(__vsubfp(*point, anchor));
            __vector4 side = fn_8306EDB0(fn_8306ED78(forward, up));
            __vector4 normal = fn_8306EDB0(fn_8306ED78(side, forward));
            float x, y, z, h;
            __vector4 s;

            if (fn_8306ED98(side, d) < 0.0f) {
                __vector4 sign = __vspltisw(-1);
                sign = __vslw(sign, sign);
                side = __vxor(side, sign);
            }
            x = fn_8306ED98(d, normal);
            y = fn_8306ED98(d, forward);
            z = fn_8306ED98(d, side);
            h = (float)sqrt(fn_8306E7E8(spheres[i].radius * spheres[i].radius - x * x - y * y, 0.0f)) - z;
            s.vector4_f32[3] = h;
            s.vector4_f32[2] = h;
            s.vector4_f32[1] = h;
            s.vector4_f32[0] = h;
            *point = __vmaddfp(side, s, *point);
            moved = 1;
        }
    }
    return moved;
}
