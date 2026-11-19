typedef struct Vector_8306AF68 {
    float values[4];
} Vector_8306AF68;

extern void fn_82810328(const void *a, const void *b, Vector_8306AF68 *out);
extern float fn_82810280(const Vector_8306AF68 *a, const Vector_8306AF68 *b);
extern void fn_82810558(Vector_8306AF68 *direction, const void *start, float t, void *out);

#define CLAMP01(x) ((x) < 0.0f ? 0.0f : ((x) > 1.0f ? 1.0f : (x)))

void fn_8306AF68(const void *start1, const void *end1, const void *start2, const void *end2, void *out1,
                 void *out2)
{
    Vector_8306AF68 d1;
    Vector_8306AF68 d2;
    Vector_8306AF68 r;
    float a;
    float b;
    float c;
    float e;
    float f;
    float denom;
    float s;
    float t;
    float projected;

    fn_82810328(end1, start1, &d1);
    fn_82810328(end2, start2, &d2);
    fn_82810328(start1, start2, &r);
    a = fn_82810280(&d1, &d1);
    e = fn_82810280(&d2, &d2);
    f = fn_82810280(&d2, &r);
    b = fn_82810280(&d1, &d2);
    c = fn_82810280(&d1, &r);
    denom = e * a - b * b;
    if (denom != 0.0f) {
        s = CLAMP01((b * f - c * e) / denom);
    } else {
        s = 0.0f;
    }
    t = (s * b + f) / e;
    if (t < 0.0f) {
        t = 0.0f;
        projected = -(c / a);
        s = CLAMP01(projected);
    } else if (t > 1.0f) {
        t = 1.0f;
        s = CLAMP01((b - c) / a);
    }
    fn_82810558(&d1, start1, s, out1);
    fn_82810558(&d2, start2, t, out2);
}
