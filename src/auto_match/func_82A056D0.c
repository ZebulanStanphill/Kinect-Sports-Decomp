// Band level lookup: finds the frequency band of `value` in the limit table lbl_8315CD38 (with a
// small hysteresis below the previous limit), then returns the largest level of that band and the
// bands above it, but at least the scaled level of the band below.
typedef struct Param_82A056D0 {
    float value;        /* 0x0 */
    unsigned int enabled;/* 0x4 */
    float floor;        /* 0x8 */
} Param_82A056D0;

typedef struct State_82A056D0 {
    Param_82A056D0 params[19];  /* bands are params[12..18] */
} State_82A056D0;

extern float lbl_8315CD38[8];
extern const float lbl_8201546C;

static __forceinline float Level(State_82A056D0 *self, unsigned int band, float scale)
{
    float level = self->params[band + 12].floor;

    if (self->params[band + 12].enabled == 0) {
        level = self->params[band + 12].value;
    } else {
        float scaled = self->params[band + 12].value * scale;

        if (level < scaled) {
            level = scaled;
        }
    }
    return level;
}

float fn_82A056D0(State_82A056D0 *self, float value)
{
    unsigned int band = 6;
    unsigned int i;
    float previous;
    float level;

    for (i = 0; i < 7; i++) {
        if (value < lbl_8315CD38[i]) {
            band = i;
            break;
        }
    }
    if (band != 0 && value < lbl_8315CD38[band - 1] + lbl_8201546C) {
        band--;
    }
    previous = 0.0f;
    if (band != 0) {
        previous = Level(self, band - 1, 0.7f);
    }
    level = Level(self, band, 0.7f);
    for (i = band + 1; i < 7; i++) {
        float other = Level(self, i, 0.7f);

        if (!(level > other)) {
            level = other;
        }
    }
    previous = previous * 0.7f;
    if (level < previous) {
        return previous;
    }
    return level;
}
