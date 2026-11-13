typedef struct Sphere_82811FB0 {
    float center[3];
    float radius;
} Sphere_82811FB0;

extern void fn_82810328(float *a, float *b, float *out);
extern float fn_82810BE8(float *v);

float fn_82811FB0(Sphere_82811FB0 *s, float *p)
{
    float d[3];
    float len;

    fn_82810328(p, s->center, d);
    len = fn_82810BE8(d);
    if (len <= s->radius)
        return 0.0f;
    return len - s->radius;
}
