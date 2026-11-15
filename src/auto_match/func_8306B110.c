typedef struct Vector_8306B110 {
    float values[4];
} Vector_8306B110;

extern void fn_82810328(const void *, const void *, Vector_8306B110 *);
extern float fn_82810280(const Vector_8306B110 *, const Vector_8306B110 *);
extern void fn_82810558(Vector_8306B110 *, const void *, float, void *);

int fn_8306B110(const void *point, const void *start, const void *end, void *out)
{
    Vector_8306B110 direction;
    Vector_8306B110 relative;
    float numerator;
    float fraction;
    int result = 2;
    fn_82810328(end, start, &direction);
    fn_82810328(point, start, &relative);
    numerator = fn_82810280(&relative, &direction);
    fraction = numerator / fn_82810280(&direction, &direction);
    if (fraction <= 0.0f) {
        result = 0;
        fraction = 0.0f;
    } else if (fraction >= 1.0f) {
        result = 1;
        fraction = 1.0f;
    }
    fn_82810558(&direction, start, fraction, out);
    return result;
}
