#include "xdk/vectorintrinsics.h"

typedef struct Motion_82DA5688 {
    char pad0[0xc0];
    __vector4 inertiaAndMassInv;            /* 0xc0 */
    __vector4 linearVelocity;               /* 0xd0 */
    __vector4 angularVelocity;              /* 0xe0 */
} Motion_82DA5688;

void fn_82DA5688(Motion_82DA5688 *self, const __vector4 *impulse)
{
    self->angularVelocity = __vmaddfp(self->inertiaAndMassInv, *impulse, self->angularVelocity);
}
