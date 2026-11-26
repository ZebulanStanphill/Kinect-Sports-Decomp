// Havok hkpPlaneShape::castRay: inside the "TtrcPlane" timer scope, intersects the ray with the
// plane (from in front, to behind), interpolates the hit point and accepts it when it lies inside
// the plane's AABB (centre + half extents); then writes the plane normal, the hit fraction and an
// invalid shape key to the output. The hkBool result is returned through the hidden pointer.
#include "havok/hkpPlaneShape.h"
#include "havok/hkpShapeRayCastOutput.h"
#include "havok/hkpShapeRayCastInput.h"

struct ProfTls_82D4CFB8 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
};

extern "C" {
extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
}

static __forceinline void TimerBegin(const char *name)
{
    ProfTls_82D4CFB8 *t = (ProfTls_82D4CFB8 *)KeTlsGetValue(lbl_8323B4A0);
    void **p = t->cur;
    if (p < t->end) {
        p[0] = (void *)name;
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}

struct TimerScope_82D4CFB8 {
    __forceinline TimerScope_82D4CFB8(const char *name) { TimerBegin(name); }
    __forceinline ~TimerScope_82D4CFB8() { TimerBegin("Et"); }
};

extern "C" hkBool fn_82D4CFB8(const hkpPlaneShape *self, const hkpShapeRayCastInput &input,
                              hkpShapeRayCastOutput &results)
{
    TimerScope_82D4CFB8 timer("TtrcPlane");
    const hkVector4 &plane = self->m_plane;
    const hkReal fromDist = plane.dot4xyz1(input.m_from);
    const hkVector4 &plane2 = self->m_plane;
    const hkReal toDist = plane2.dot4xyz1(input.m_to);
    if (fromDist >= 0.0f && toDist < 0.0f) {
        const hkReal hitFraction = fromDist / (fromDist - toDist);
        hkVector4 hitPoint;
        hitPoint.setInterpolate4(input.m_from, input.m_to, hitFraction);
        hkVector4 diff;
        diff.setSub4(hitPoint, self->m_aabbCenter);
        diff.setAbs4(diff);
        if (diff.compareLessThanEqual4(self->m_aabbHalfExtents).allAreSet(hkVector4Comparison::MASK_XYZ)) {
            results.m_hitFraction = hitFraction;
            results.m_normal = self->m_plane;
            results.setKey(0xffffffff);
            return true;
        }
    }
    return false;
}
