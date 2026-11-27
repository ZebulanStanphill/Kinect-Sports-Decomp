/* Havok hkpMotion::getMass: 1 / inverse mass (w of the inertia-and-mass-inverse vector at
   +0xc0), 0 for an infinite mass. */

#include "xdk/vectorintrinsics.h"

typedef struct Motion_82D93128 {
    char pad00[0xc0];
    __vector4 inertiaAndMassInv;   /* 0xc0 */
} Motion_82D93128;

static __forceinline float GetW(const __vector4 *v)
{
    float r;

    __stvewx(__vspltw(*v, 3), &r, 0);
    return r;
}

float fn_82D93128(const Motion_82D93128 *self)
{
    float invMass = GetW(&self->inertiaAndMassInv);

    if (invMass == 0.0f) {
        return 0.0f;
    }
    return 1.0f / invMass;
}
