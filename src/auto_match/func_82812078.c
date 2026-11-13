/* Squared gap between two spheres: the distance between the centres beyond the sum of the radii,
   squared (0 when they touch or overlap). */
typedef struct Sphere_82812078 {
    float center[3];                /* 0x00 */
    float radius;                   /* 0x0c */
} Sphere_82812078;

extern void fn_82810328(float *a, float *b, float *out);
extern float fn_82810BE8(float *v);

float fn_82812078(Sphere_82812078 *s, Sphere_82812078 *other)
{
    float d[3];
    float len;
    float otherRadius;
    float r;

    otherRadius = other->radius;
    fn_82810328(other->center, s->center, d);
    len = fn_82810BE8(d);
    if (len <= s->radius + otherRadius)
        return 0.0f;
    r = len - s->radius - otherRadius;
    return r * r;
}
