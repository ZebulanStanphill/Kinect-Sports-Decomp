#include <math.h>

int fn_82D08290(float *a, float *b, float eps)
{
    if (fabsf(*a - *b) < eps) {
        return 1;
    }
    return 0;
}
