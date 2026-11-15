typedef struct Vector_8285D318 {
    float values[3]; /* 0x0 */
} Vector_8285D318;

extern void fn_82810328(const void *, const void *, Vector_8285D318 *);
extern float fn_82810B40(const void *, const void *);
extern int fn_8280A5E8(float);
extern void fn_828102A8(const void *, void *, float);
extern void fn_82810208(const void *, const void *, void *);
extern void fn_828104E8(const void *, const void *, void *);

void fn_8285D318(const float *self, char *segment, void *out, float *distance)
{
    Vector_8285D318 relative;
    void *start = segment + 0x30;
    float length;
    fn_82810328(segment, start, &relative);
    length = fn_82810B40(start, segment + 0x3c);
    if (fn_8280A5E8(self[5])) {
        *distance = 0.0f;
    } else {
        fn_828102A8(&relative, &relative, length / self[5]);
        fn_82810208(start, &relative, &relative);
        fn_828104E8(start, segment + 0x3c, out);
        *distance = fn_82810B40(out, &relative);
    }
}
