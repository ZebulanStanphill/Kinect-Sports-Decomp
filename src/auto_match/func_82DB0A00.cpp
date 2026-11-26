// Ray cast through the kd-tree and the AABB tree (self: +0xc AABB tree, +0x10 kd-tree, +0x24 use AABB tree).
// A local keeps the 1.0f in f31 across the calls, as in the original.
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpAabbTreeCollidableRaycaster.h"
#include "havok/hkpKdTreeCollidableRaycaster.h"
#include "havok/hkpWorldRayCastInput.h"
struct hkpShapeRayCastCollectorOutput {
	hkVector4 m_normal;
	hkReal m_hitFraction;
	int m_extraInfo;
	int m_pad[2];
	HK_FORCE_INLINE hkpShapeRayCastCollectorOutput(hkReal one) { reset(one); }
	HK_FORCE_INLINE void reset(hkReal one) { m_hitFraction = one; m_extraInfo = -1; }
};
struct hkpShapeRayCastOutput : public hkpShapeRayCastCollectorOutput {
	hkpShapeKey m_shapeKeys[8];
	int m_shapeKeyIndex;
	HK_FORCE_INLINE hkpShapeRayCastOutput(hkReal one) : hkpShapeRayCastCollectorOutput(one) { m_shapeKeyIndex = 0; m_shapeKeys[0] = 0xffffffff; }
};
struct hkpWorldRayCastOutput : public hkpShapeRayCastOutput {
	const hkpCollidable *m_rootCollidable;   // +0x50
	HK_FORCE_INLINE hkpWorldRayCastOutput(hkReal one) : hkpShapeRayCastOutput(one) { m_rootCollidable = 0; }
};

struct KdTree;
struct AabbTree;
// Returns hkBool through a hidden pointer (the 1-byte temporary at 0x50).
extern "C" hkBool fn_83084210(KdTree *, const hkVector4 &, const hkVector4 &, hkpKdTreeCollidableRaycaster *);
typedef hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector AabbCollector;
extern "C" void fn_82D378E8(AabbTree *, const hkVector4 &, const hkVector4 &, AabbCollector *, float);

struct Self {
	char pad[0xc];
	AabbTree *m_aabbTree;
	KdTree *m_kdTree;
	char pad14[0x10];
	hkBool m_useAabbTree;
};

extern "C" void fn_82DB0A00(Self *self, const hkpWorldRayCastInput &input, const hkpCollisionFilter *filter, hkpRayHitCollector *collector)
{
	hkpAabbTreeCollidableRaycaster caster;
	caster.m_input = &input;
	caster.m_collector = collector;
	caster.m_filter = filter;
	caster.m_shapeCollectionFilter = filter;
	hkReal one = 1.0f;
	hkpWorldRayCastOutput output(one);
	caster.m_output = &output;
	if (self->m_kdTree) {
		hkpKdTreeCollidableRaycaster kdCaster;
		kdCaster.m_input = &input;
		kdCaster.m_collector = collector;
		kdCaster.m_filter = filter;
		kdCaster.m_shapeCollectionFilter = filter;
		hkpWorldRayCastOutput kdOutput(one);
		kdCaster.m_output = &kdOutput;
		fn_83084210(self->m_kdTree, input.m_from, input.m_to, &kdCaster);
	}
	if (self->m_useAabbTree)
		fn_82D378E8(self->m_aabbTree, input.m_from, input.m_to, static_cast<AabbCollector *>(&caster), one);
}
