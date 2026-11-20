#include <math.h>

void fn_82FE5AE0(float *samples, float gain, int count)
{
    float *end;

    if (gain > 1.0f) {
        gain = 1.0f;
    }
    if (fabsf(gain - 1.0f) <= 0.01f) {
        return;
    }
    end = samples + count;
    for (; samples < end; samples++) {
        *samples = *samples * gain;
    }
}
