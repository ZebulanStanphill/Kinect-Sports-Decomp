#include "xdk/vectorintrinsics.h"

typedef struct Plane_82DDDED0 {
    __vector4 normal;  /* 0x0 */
    __vector4 *origin; /* 0x10 */
} Plane_82DDDED0;

int fn_82DDDED0(Plane_82DDDED0 *plane, const __vector4 *point, float *minimum, float *maximum)
{
    float distance;
    int result = 1;
    __stvewx(__vmsum3fp(plane->normal, __vsubfp(*point, *plane->origin)), &distance, 0);
    if (distance > *minimum) {
        if (distance < *maximum) {
            *maximum = distance;
        }
    } else {
        if (distance + 1.0000000116860974e-07f > *minimum) {
            *minimum = distance + 1.0000000116860974e-07f;
        }
        result = 2;
    }
    if (*minimum < *maximum) {
        return result;
    }
    return 4;
}
