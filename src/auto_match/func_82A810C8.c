#include <stdlib.h>
#include <string.h>

typedef struct Filter_82A810C8 {
    float *coeffs;   /* 0x00 */
    int delay;       /* 0x04 */
    int count;       /* 0x08 */
    float *state;    /* 0x0C */
    int stateLength; /* 0x10 */
    float *lead;     /* 0x14 */
} Filter_82A810C8;

extern void fn_82C44798(Filter_82A810C8 *filter);
extern void *fn_82C2B580(unsigned int size);

long fn_82A810C8(Filter_82A810C8 *filter, const double *taps, int first, int last)
{
    long hr = 0;
    int i;

    fn_82C44798(filter);
    filter->delay = first;
    if ((filter->delay > 0 ? filter->delay : -filter->delay) > 100000 || abs(last) > 100000) {
        hr = 0x80070057;
        goto done;
    }
    filter->count = last - first + 1;
    if (first > 0 || filter->count - first <= 0 || filter->count <= 0) {
        hr = 0x80070057;
        goto done;
    }
    filter->coeffs = (float *)fn_82C2B580(filter->count * 4);
    if (filter->coeffs == 0) {
        hr = 0x8007000E;
        goto done;
    }
    memset(filter->coeffs, 0, filter->count * 4);
    for (i = 0; i < filter->count; i++) {
        filter->coeffs[filter->count - i - 1] = (float)taps[i];
    }
    filter->state = (float *)fn_82C2B580((filter->count - 1) * 4);
    if (filter->state == 0) {
        hr = 0x8007000E;
        goto done;
    }
    memset(filter->state, 0, (filter->count - 1) * 4);
    for (i = 0; i < filter->count - 1; i++) {
        filter->state[i] = 0.0f;
    }
    if (filter->delay < 0) {
        filter->lead = (float *)fn_82C2B580(filter->delay * -4);
        if (filter->lead == 0) {
            hr = 0x8007000E;
            goto done;
        }
        memset(filter->lead, 0, filter->delay * -4);
        for (i = 0; i < -filter->delay; i++) {
            filter->lead[i] = 0.0f;
        }
    }
    filter->stateLength = filter->count - 1;
done:
    return hr;
}
