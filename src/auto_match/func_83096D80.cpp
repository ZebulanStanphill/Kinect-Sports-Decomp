// Havok world ray caster, per-collidable callback (hkpWorldRayCaster::addBroadPhaseHandle shape):
// skips collidables without a shape or rejected by the ray collidable filter, moves the ray into
// the collidable's local space and casts it, either into the hit collector or into the single
// output (whose normal is rotated back into world space); keeps the early-out hit fraction.

#include "havok/hkpCollisionFilter.h"
#include "havok/hkpCollidable.h"
#include "havok/hkpRayHitCollector.h"
#include "havok/hkpWorldRayCastInput.h"
#include "havok/hkpShapeRayCastInput.h"
#include "havok/hkpShapeRayCastOutput.h"

static __forceinline void SetTransformedInversePos(hkVector4 &out, const hkTransform &t, const hkVector4 &v)
{
    hkQuadReal h = __vsubfp(v.m_quad, t.getTranslation().m_quad);
    hkQuadReal d0 = __vmsum3fp(t.getRotation().m_col0.m_quad, h);
    hkQuadReal d1 = __vmsum3fp(t.getRotation().m_col1.m_quad, h);
    hkQuadReal d2 = __vmsum3fp(t.getRotation().m_col2.m_quad, h);
    out.m_quad = __vmrghw(__vmrghw(d0, d2), __vmrghw(d1, lbl_82132D00));
}

static __forceinline void SetRotatedDir(hkVector4 &out, const hkRotation &r, const hkVector4 &v)
{
    hkQuadReal c0 = r.m_col0.m_quad;
    hkQuadReal c1 = r.m_col1.m_quad;
    hkQuadReal c2 = r.m_col2.m_quad;
    hkQuadReal b = v.m_quad;
    hkQuadReal t = __vmulfp(c0, __vspltw(b, 0));
    t = __vmaddfp(c1, __vspltw(b, 1), t);
    out.m_quad = __vmaddfp(c2, __vspltw(b, 2), t);
}

struct hkpWorldRayCastOutput : public hkpShapeRayCastOutput {
    const hkpCollidable *m_rootCollidable;  // 0x50
};

struct WorldRayCaster_83096D80 {
    char pad0[0x10];
    const hkpWorldRayCastInput *m_input;     // 0x10
    const hkpRayCollidableFilter *m_filter;  // 0x14
    const hkpRayShapeCollectionFilter *m_shapeCollectionFilter; // 0x18
    hkpWorldRayCastOutput *m_result;         // 0x1c
    hkpRayHitCollector *m_collectorBase;     // 0x20
    hkReal m_earlyOutHitFraction;            // 0x24
};

extern "C" void fn_83096D80(WorldRayCaster_83096D80 *self, const hkpCollidable *col)
{
    const hkpShape *shape = col->m_shape;
    if (shape == 0)
        return;
    if (self->m_filter != 0 && !self->m_filter->isCollisionEnabled(*self->m_input, *col))
        return;

    const hkTransform &trans = col->getTransform();
    hkpShapeRayCastInput sinput;
    SetTransformedInversePos(sinput.m_from, trans, self->m_input->m_from);
    SetTransformedInversePos(sinput.m_to, trans, self->m_input->m_to);
    sinput.m_filterInfo = self->m_input->m_filterInfo;
    sinput.m_rayShapeCollectionFilter = self->m_shapeCollectionFilter;

    if (self->m_collectorBase != 0) {
        shape->castRayWithCollector(sinput, *col, *self->m_collectorBase);
        self->m_earlyOutHitFraction = self->m_collectorBase->m_earlyOutHitFraction;
    } else {
        hkBool hit = shape->castRay(sinput, *self->m_result);
        if (hit) {
            self->m_result->m_rootCollidable = col;
            SetRotatedDir(self->m_result->m_normal, trans.getRotation(), self->m_result->m_normal);
            self->m_earlyOutHitFraction = self->m_result->m_hitFraction;
        }
    }
}
