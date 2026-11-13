typedef struct Sphere_82811D50 { float center[3]; float radius; } Sphere_82811D50;

extern void fn_82810328(float *a, float *b, float *out);
extern float fn_82810BE8(float *v);
extern void fn_828102A8(float *p, float *out, float x);
extern void fn_82810208(float *a, float *b, float *out);

void fn_82811D50(Sphere_82811D50 *s, float *a, float *b)
{
    float d[3];
    fn_82810328(b, a, d);
    s->radius = fn_82810BE8(d) * 0.5f;
    fn_828102A8(d, d, 0.5f);
    fn_82810208(d, a, s->center);
}
