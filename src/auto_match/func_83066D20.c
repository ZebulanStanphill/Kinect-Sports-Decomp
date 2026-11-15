typedef struct Vector_83066D20 {
    float values[3];
} Vector_83066D20;

extern float fn_82810280(const void *, const void *);
extern void fn_82810B78(const void *, Vector_83066D20 *);
extern float fn_82809CB0(float);
extern void fn_82810328(const void *, const void *, Vector_83066D20 *);
extern void fn_82810558(const void *, const void *, float, void *);

int fn_83066D20(char *plane, void *origin, void *direction, void *out)
{
    Vector_83066D20 normalized;
    Vector_83066D20 relative;
    float denominator = fn_82810280(direction, plane);
    fn_82810B78(direction, &normalized);
    if (fn_82809CB0(fn_82810280(&normalized, plane)) <= 0.00001f) {
        return 0;
    }
    if (out) {
        float distance;
        float fraction;
        fn_82810328(origin, plane + 0xc, &relative);
        distance = fn_82810280(plane, &relative);
        fraction = distance * (-1.0f / denominator);
        fn_82810558(direction, origin, fraction, out);
    }
    return 1;
}
