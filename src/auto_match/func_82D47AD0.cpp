#include "havok/hkBaseTypes.h"
#include "xdk/vectorintrinsics.h"

struct RayInput_82D47AD0 {
    __vector4 from;          /* 0x0 */
    __vector4 to;            /* 0x10 */
    unsigned int filterInfo; /* 0x20 */
    void *filter;            /* 0x24 */
    int pad28[2];
};

struct SphereInput_82D47AD0 {
    RayInput_82D47AD0 ray; /* 0x0 */
    float offset;          /* 0x30 */
    float radius;          /* 0x34 */
};

struct HeightField_82D47AD0 {
    char pad0[0x24];
    float scale; /* 0x24 */
};

extern "C" void fn_82D46950(const HeightField_82D47AD0 *self, const RayInput_82D47AD0 *input,
                            const void *body, hkBool isSphere, float radius, void *collector);

extern "C" void fn_82D47AD0(const HeightField_82D47AD0 *self, const SphereInput_82D47AD0 *input,
                            const void *body, void *collector)
{
    RayInput_82D47AD0 ray = input->ray;
    float offset = input->offset;

    if (self->scale > 0.0f) {
        offset = -offset;
    }
    ray.from.vector4_f32[1] += offset;
    ray.to.vector4_f32[1] += offset;
    fn_82D46950(self, &ray, body, true, input->radius, collector);
}
