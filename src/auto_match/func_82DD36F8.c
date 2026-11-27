#include "xdk/vectorintrinsics.h"

extern double fabs(double);

float fn_82DD36F8(const __vector4 *normal, const __vector4 *first, const __vector4 *second)
{
    float distance;
    __stvewx(__vmsum3fp(__vsubfp(*first, *second), *normal), &distance, 0);
    return (float)fabs(distance) * distance;
}
