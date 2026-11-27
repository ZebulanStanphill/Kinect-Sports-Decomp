#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82132D70;

typedef struct Bounds_82D1E5F8 {
    __vector4 m_min; /* 0x0 */
    __vector4 m_max; /* 0x10 */
} Bounds_82D1E5F8;

typedef struct Query_82D1E5F8 {
    char padding[0x10];
    __vector4 center;      /* 0x10 */
    float distanceSquared; /* 0x20 */
    char unknown[0xc];
    const Bounds_82D1E5F8 *closest; /* 0x30 */
} Query_82D1E5F8;

float fn_82D1E5F8(Query_82D1E5F8 *self, const Bounds_82D1E5F8 *bounds)
{
    __vector4 center = __vmulfp(lbl_82132D70, __vaddfp(bounds->m_min, bounds->m_max));
    __vector4 delta = __vsubfp(self->center, center);
    float distanceSquared;
    __stvewx(__vmsum3fp(delta, delta), &distanceSquared, 0);
    if (distanceSquared < self->distanceSquared) {
        self->distanceSquared = distanceSquared;
        self->closest = bounds;
        return 1.0f;
    }
    return 1.0f;
}
