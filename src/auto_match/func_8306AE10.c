typedef struct Vector_8306AE10 {
    float values[4];
} Vector_8306AE10;

extern void fn_82810360(const void *source, Vector_8306AE10 *out);
extern void fn_82810328(const void *a, const void *b, Vector_8306AE10 *out);
extern float fn_82810280(const Vector_8306AE10 *a, const Vector_8306AE10 *b);
extern void fn_82810558(Vector_8306AE10 *direction, const void *start, float t, void *out);

int fn_8306AE10(const void *start1, const void *direction1, const void *start2, const void *end2, void *out1,
                void *out2)
{
    Vector_8306AE10 d1;
    Vector_8306AE10 d2;
    Vector_8306AE10 r;
    float a;
    float b;
    float c;
    float e;
    float f;
    float denom;
    float s;
    float t;
    int result;

    fn_82810360(direction1, &d1);
    fn_82810328(end2, start2, &d2);
    fn_82810328(start1, start2, &r);
    a = fn_82810280(&d1, &d1);
    e = fn_82810280(&d2, &d2);
    f = fn_82810280(&d2, &r);
    b = fn_82810280(&d1, &d2);
    c = fn_82810280(&d1, &r);
    denom = e * a - b * b;
    if (denom != 0.0f) {
        s = (b * f - c * e) / denom;
    } else {
        s = 0.0f;
    }
    t = (s * b + f) / e;
    if (t < 0.0f) {
        result = 0;
        t = 0.0f;
        s = -(c / a);
    } else if (t > 1.0f) {
        result = 1;
        t = 1.0f;
        s = (b - c) / a;
    } else {
        result = 2;
    }
    fn_82810558(&d1, start1, s, out1);
    fn_82810558(&d2, start2, t, out2);
    return result;
}
