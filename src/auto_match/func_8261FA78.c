typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern double __fctid(double);
extern double __fcfid(double);

typedef struct Tracker_8261FA78 {
    unsigned char pad0[0x68];
    int enabled; /* 0x68 */
} Tracker_8261FA78;

extern int fn_8261F510(Tracker_8261FA78 *self, float distance, float angle, float range, float minimum,
                       __vector4 origin, float *result);

/* Maps an angle to (-2 pi, 2 pi) by dropping whole turns. */
static __forceinline float WrapTurns_8261FA78(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831854820251465);
}

int fn_8261FA78(Tracker_8261FA78 *self, __vector4 origin, float distance, float angle, float range,
                float minimum, float *heading, int linear)
{
    float result;
    float offset;
    float below;
    float above;
    int attempt;
    int i;
    int scale;

    if (self->enabled == 0) {
        return 0;
    }
    offset = 0.0f;
    attempt = 0;
    do {
        result = distance;
        below = angle - offset;
        above = offset + angle;
        if (fn_8261F510(self, distance, below, range, minimum, origin, &result) == 0 && result >= minimum) {
            *heading = WrapTurns_8261FA78(below);
            return 1;
        }
        if ((float)attempt < 16.0f) {
            if (fn_8261F510(self, distance, above, range, minimum, origin, &result) == 0 &&
                result >= minimum) {
                *heading = WrapTurns_8261FA78(above);
                return 1;
            }
        }
        if (linear != 0) {
            offset = offset + 0.18479957f;
        } else {
            for (i = 0, scale = 1; i < attempt / 4 + 1; i++) {
                scale = scale << 1;
            }
            offset = (float)scale * 0.017453292f + offset;
        }
        attempt++;
    } while ((float)attempt < 17.0f);
    return 0;
}
