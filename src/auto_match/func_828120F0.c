/* Gap between two spheres: the distance between the centres beyond the sum of the radii
   (0 when they touch or overlap). */
typedef struct Vec3_828120F0 {
    float v[3];
} Vec3_828120F0;

typedef struct Sphere_828120F0 {
    Vec3_828120F0 center;           /* 0x00 */
    float radius;                   /* 0x0c */
} Sphere_828120F0;

extern void fn_82810328(float *a, float *b, float *out);
extern float fn_82810BE8(float *v);

float fn_828120F0(Sphere_828120F0 *s, Sphere_828120F0 *other)
{
    Vec3_828120F0 c;
    float d[3];
    float len;
    float otherRadius;

    c = other->center;
    otherRadius = other->radius;
    fn_82810328(c.v, s->center.v, d);
    len = fn_82810BE8(d);
    if (len <= s->radius + otherRadius)
        return 0.0f;
    return len - other->radius - s->radius;
}
