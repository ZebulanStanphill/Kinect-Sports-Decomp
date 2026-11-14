typedef struct Curve_8248FCA0 {
    char pad0[0x14];
    unsigned int start;
} Curve_8248FCA0;

typedef struct Self_8248FCA0 {
    char pad0[0x38];
    unsigned int time;
} Self_8248FCA0;

extern float fn_82490F58(Curve_8248FCA0 *curve, unsigned int from, unsigned int to);

float fn_8248FCA0(Self_8248FCA0 *self, Curve_8248FCA0 *curve)
{
    if (self->time <= curve->start) {
        return 0.0f;
    }
    return fn_82490F58(curve, curve->start, self->time);
}
