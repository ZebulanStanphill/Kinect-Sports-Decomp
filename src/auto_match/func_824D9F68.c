typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Tuning_824D9F68 {
    char pad0[0x14];
    int unclamped; /* 0x14 */
    char pad18[0xa0 - 0x18];
    float targets[3];  /* 0xa0 */
    float deadZone;    /* 0xac */
    float rangeEnd;    /* 0xb0 */
    float outputStart; /* 0xb4 */
    float outputEnd;   /* 0xb8 */
} Tuning_824D9F68;

extern Tuning_824D9F68 lbl_831C3E30;

extern double sqrt(double);
extern double fabs(double);
extern void fn_824DA438(float a, float b, __vector4 from, __vector4 to, __vector4 up, float *scale,
                        float *outY, float *outX);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

void fn_824D9F68(float a, float b, int index, float *scale, __vector4 from, __vector4 to, __vector4 up,
                 float *outRatio, float *outDistance, float *outLimited)
{
    float x;
    float y;
    float distance;
    float error;
    float correction;
    float total;

    fn_824DA438(a, b, from, to, up, scale, &y, &x);
    distance = (float)sqrt(x * x + y * y);
    error = lbl_831C3E30.targets[index] - distance;
    if (fabs(error) <= lbl_831C3E30.deadZone) {
        correction = 0.0f;
    } else if (error > 0.0f) {
        correction = fn_82539560(error, lbl_831C3E30.deadZone, lbl_831C3E30.rangeEnd,
                                 lbl_831C3E30.outputStart, lbl_831C3E30.outputEnd);
    } else {
        correction = fn_82539560(error, -lbl_831C3E30.rangeEnd, -lbl_831C3E30.deadZone,
                                 -lbl_831C3E30.outputEnd, -lbl_831C3E30.outputStart);
    }
    if (lbl_831C3E30.unclamped != 0) {
        *outDistance = distance;
        *outLimited = distance;
    } else {
        *outDistance = distance;
        total = correction + distance;
        *outLimited = -total >= 0.0f ? 0.0f : total;
    }
    *outRatio = x / distance;
}
