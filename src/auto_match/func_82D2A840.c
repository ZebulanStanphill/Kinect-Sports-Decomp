#include "xdk/vectorintrinsics.h"

typedef struct Query_82D2A840 {
    char padding[0x10];  /* 0x00 */
    __vector4 center;    /* 0x10 */
    float radiusSquared; /* 0x20 */
    unsigned int value;  /* 0x24 */
} Query_82D2A840;

typedef struct Bounds_82D2A840 {
    __vector4 minimum;  /* 0x00 */
    __vector4 maximum;  /* 0x10 */
    unsigned int value; /* 0x20 */
} Bounds_82D2A840;

float fn_82D2A840(Query_82D2A840 *self, const Bounds_82D2A840 *bounds)
{
    float half = 0.5f;
    __vector4 center = __vmulfp(__vaddfp(bounds->minimum, bounds->maximum), __vspltw(__lvlx(&half, 0), 0));
    __vector4 delta = __vsubfp(center, self->center);
    float distanceSquared;
    __stvewx(__vmsum3fp(delta, delta), &distanceSquared, 0);
    if (distanceSquared > self->radiusSquared) {
        return 1.0f;
    }
    self->value = bounds->value;
    return 1.0f;
}
