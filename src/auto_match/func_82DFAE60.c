#include <math.h>


float fn_82DFAE60(char *p, float x)
{
    float t = fabsf(x) * *(float *)(p + 0x10) * *(float *)(p + 0xc) * *(float *)(p + 8);
    t *= x;
    return t * -0.5f;
}
