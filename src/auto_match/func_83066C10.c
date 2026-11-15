typedef struct Vector_83066C10 {
    float values[3]; /* 0x0 */
} Vector_83066C10;

extern void fn_82810328(const void *, const void *, Vector_83066C10 *);
extern float fn_82810308(const void *);
extern int fn_83066788(const void *, const void *, float);
extern float fn_82810280(const void *, const void *);
extern void fn_82810530(const void *, void *);
extern void fn_82810558(const void *, const void *, float, void *);

int fn_83066C10(char *plane, void *start, void *end, void *out, float radius)
{
    Vector_83066C10 direction;
    Vector_83066C10 relative;
    int startSide;
    int endSide;
    fn_82810328(end, start, &direction);
    if (fn_82810308(&direction) > radius * radius) {
        startSide = fn_83066788(plane, start, radius);
        endSide = fn_83066788(plane, end, radius);
        if (startSide != endSide && startSide != 2 && endSide != 2) {
            fn_82810280(&direction, plane);
            if (out) {
                float denominator;
                float distance;
                float fraction;
                if (startSide != 1) {
                    start = end;
                    fn_82810530(&direction, &direction);
                }
                denominator = fn_82810280(&direction, plane);
                fn_82810328(start, plane + 0xc, &relative);
                distance = fn_82810280(plane, &relative);
                fraction = distance * (-1.0f / denominator);
                fn_82810558(&direction, start, fraction, out);
            }
            return 1;
        }
    }
    return 0;
}
