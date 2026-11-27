#include <string.h>

typedef struct Buffer_8303AAE0 {
    float *samples; /* 0x0 */
    char pad4[0xa];
    unsigned short count; /* 0xe */
} Buffer_8303AAE0;

typedef struct Filter_8303AAE0 {
    float coefficients[4]; /* 0x00 */
    float current;         /* 0x10 */
    float target;          /* 0x14 */
    unsigned int step;     /* 0x18 */
    char pad1c[4];
    unsigned char alternate; /* 0x20 */
    unsigned char bypass;    /* 0x21 */
} Filter_8303AAE0;

extern unsigned char fn_8303A930(float x, unsigned char alt, float *out);
extern void fn_8303AA38(float cutoff, float *coefficients);
extern void fn_8303A888(float *state, const float *coef, float **pbuf, unsigned int count);

static __forceinline void FlushDenormal(float *value)
{
    *value = (*value + 1e-18f) - 1e-18f;
}

void fn_8303AAE0(Buffer_8303AAE0 *buffer, Filter_8303AAE0 *filter, float *state)
{
    float *samples = buffer->samples;
    unsigned int remaining = buffer->count;
    float start = filter->current;
    float range = filter->target - start;
    unsigned int count;
    float cutoff;
    unsigned char bypass;

    while (remaining != 0) {
        count = remaining > 0x80 ? 0x80 : remaining;
        if (filter->step < 8) {
            filter->step++;
            filter->current = (float)filter->step * range * 0.125f + start;
            cutoff = 0.0f;
            bypass = fn_8303A930(filter->current, filter->alternate, &cutoff);
            if (!bypass) {
                fn_8303AA38(cutoff, filter->coefficients);
            } else if (!filter->bypass) {
                memset(state, 0, 4 * sizeof(float));
            }
            filter->bypass = bypass;
        }
        if (!filter->bypass) {
            fn_8303A888(state, filter->coefficients, &samples, count);
        }
        remaining -= count;
    }
    FlushDenormal(&state[2]);
    FlushDenormal(&state[3]);
}
