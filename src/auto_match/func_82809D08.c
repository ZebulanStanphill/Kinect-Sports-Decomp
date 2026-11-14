#include <math.h>

float fn_82809D08(float a, float b)
{
    if (fabsf(b) > fabsf(a)) {
        return a;
    }
    return a - (float)(int)(a / b) * b;
}
