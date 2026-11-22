#include <string.h>

typedef struct Params_826554A8 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Params_826554A8;

typedef struct Filter_826554A8 {
    unsigned char data[0x288];
} Filter_826554A8;

typedef struct Voice_826554A8 {
    int channels;        /* 0x000 */
    float gain;          /* 0x004 */
    char state[0x280];   /* 0x008 */
    unsigned int period; /* 0x288 */
} Voice_826554A8;

/* 2.0f, 4.5f and 4.0f, the first elements of three constant tables. They are read as variables: the
   original loads each through its own address, and literals would share one base register. */
extern const float lbl_821916FC[19];
extern const float lbl_821916F4[2];
extern const float lbl_8218E8FC[129];

extern void fn_82654FC0(int mode, int channels, int type, Params_826554A8 *params, Filter_826554A8 *filter,
                        float gain, float shape);
extern void fn_82654798(Filter_826554A8 *filter, void *state, int channels);

static __forceinline float ClampUnit(float value)
{
    if (value < -1.0f)
        value = -1.0f;
    if (value > 1.0f)
        value = 1.0f;
    return value;
}

void fn_826554A8(Voice_826554A8 *voice, int stereo, int type, Params_826554A8 *params, float rate,
                 int channels, int wide)
{
    Params_826554A8 defaults;
    Filter_826554A8 filter;
    int exact = 1;
    float x;
    float y;
    float z;
    float front;
    float side;
    float scale;
    float shape;
    float gain;
    unsigned int period;

    if (params == 0) {
        params = &defaults;
        memset(&defaults, 0, sizeof(defaults));
    }
    x = ClampUnit(params->x);
    front = (0.6f - x * 0.099999994f) * x + 1.0f;
    if (wide != 0 && stereo != 0) {
        y = ClampUnit(params->y);
        side = 0.75f - (y * 0.099999994f + 0.35f) * y;
        if (rate <= 1.99999 || rate >= 2.00001)
            exact = 0;
        if (front < 1.0f)
            exact = 0;
        if (side < 1.0f)
            exact = 0;
        scale = lbl_821916FC[0] / rate;
        if (scale >= 1.0f)
            scale = 1.0f;
        voice->gain = scale * side * front * 0.0625f;
    } else {
        if (rate <= 0.999999 || rate >= 1.000001)
            exact = 0;
        if (front < 1.0f)
            exact = 0;
        scale = 1.0f / rate;
        if (scale >= 1.0f)
            scale = 1.0f;
        voice->gain = scale * front * 0.0625f;
    }
    period = (unsigned int)(rate * 524288.0f + 0.5f);
    voice->period = period;
    if (period > 0x1fffff)
        voice->period = 0x1fffff;
    gain = voice->gain;
    voice->channels = channels;
    if (type == 2) {
        z = ClampUnit(params->z);
        shape = (z * 3.0f + 8.0f) * z + 5.0f;
    } else if (type == 3) {
        z = ClampUnit(params->z);
        shape = (z * 0.05f + 0.45f) * z + 0.5f;
    } else if (type == 5) {
        z = ClampUnit(params->z);
        shape = (z * 1.5f + lbl_821916F4[0]) * z + lbl_8218E8FC[0];
    } else {
        shape = 0.0f;
    }
    fn_82654FC0(exact ? 7 : type, channels, type, params, &filter, gain, shape);
    fn_82654798(&filter, voice->state, channels);
}
