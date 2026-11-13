/* Squared distance from a point to the outside of a sphere: |p - centre| beyond the radius, squared
   (0 inside). */
typedef struct Sphere_82811F50 {
    float center[3];                /* 0x00 */
    float radius;                   /* 0x0c */
} Sphere_82811F50;

extern void fn_82810328(float *a, float *b, float *out);
extern float fn_82810BE8(float *v);

float fn_82811F50(Sphere_82811F50 *s, float *p)
{
    float d[3];
    float len;
    float r;

    fn_82810328(p, s->center, d);
    len = fn_82810BE8(d);
    if (len <= s->radius)
        return 0.0f;
    r = len - s->radius;
    return r * r;
}
