#include <math.h>

static __forceinline void SetOddDistinct_82FDFDC8(unsigned int *value, unsigned int previous)
{
    int limit;
    int divisor;
    unsigned char composite;

    if ((*value & 1) == 0) {
        (*value)++;
    }
    limit = (int)sqrt((double)*value) + 1;
    for (;;) {
        composite = 0;
        for (divisor = 3; divisor < limit; divisor += 2) {
            if (*value % divisor == 0) {
                composite = 1;
                break;
            }
        }
        if (!composite && *value != previous) {
            return;
        }
        *value += 2;
    }
}

void fn_82FDFDC8(const float *input, unsigned int scale, unsigned int count, unsigned int *output)
{
    unsigned int i = 0;
    if (count != 0) {
        float scaleValue = (float)scale;
        float unit = 0.001f;
        do {
            output[i] = (unsigned int)((input[i] * unit) * scaleValue);
            if (i == 0) {
                SetOddDistinct_82FDFDC8(&output[0], 0);
            } else {
                SetOddDistinct_82FDFDC8(&output[i], output[i - 1]);
            }
        } while (++i < count);
    }
}
