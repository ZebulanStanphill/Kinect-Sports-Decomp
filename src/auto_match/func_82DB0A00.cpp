// Ray cast through the kd-tree and the AABB tree (self: +0xc AABB tree, +0x10 kd-tree, +0x24 use AABB tree).
// lbl_82002AE0 is the linker-folded 1.0f; a local keeps it in f31 across the calls like the original's literal.
#include "havok/hkBase.h"
#include "havok/hkpCollisionFilter.h"
extern "C" float lbl_82002AE0;
class __declspec(align(16)) hkVector4 { public: float m_quad[4]; };
struct hkpWorldRayCastInput { hkVector4 m_from; hkVector4 m_to; };
class hkpRayHitCollector;

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

// Four hkAabbTreeQueryUtils<...>::Collector bases (vtables at +0..+0xc); constructor out of line.
class hkpAabbTreeCollidableRaycaster {
public:
	hkpAabbTreeCollidableRaycaster();
	void *m_vtbl[4];
	const hkpWorldRayCastInput *m_input;
	const hkpRayCollidableFilter *m_filter;
	const hkpRayShapeCollectionFilter *m_shapeFilter;
	hkpWorldRayCastOutput *m_output;
	hkpRayHitCollector *m_collector;
	hkReal m_earlyOut;
};

class hkKdTreeCastCollector {
public:
	virtual ~hkKdTreeCastCollector() {}
	virtual void castRay();
};
class hkpKdTreeCollidableRaycaster : public hkKdTreeCastCollector {
public:
	HK_FORCE_INLINE hkpKdTreeCollidableRaycaster() {}
	const hkpWorldRayCastInput *m_input;
	const hkpRayCollidableFilter *m_filter;
	const hkpRayShapeCollectionFilter *m_shapeFilter;
	hkpWorldRayCastOutput *m_output;
	hkpRayHitCollector *m_collector;
};

struct KdTree;
struct AabbTree;
// Returns hkBool through a hidden pointer (the 1-byte temporary at 0x50).
extern "C" hkBool fn_83084210(KdTree *, const hkVector4 &, const hkVector4 &, hkpKdTreeCollidableRaycaster *);
extern "C" void fn_82D378E8(AabbTree *, const hkVector4 &, const hkVector4 &, void *, float);

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
	caster.m_shapeFilter = filter;
	hkReal one = lbl_82002AE0;
	hkpWorldRayCastOutput output(one);
	caster.m_output = &output;
	if (self->m_kdTree) {
		hkpKdTreeCollidableRaycaster kdCaster;
		kdCaster.m_input = &input;
		kdCaster.m_collector = collector;
		kdCaster.m_filter = filter;
		kdCaster.m_shapeFilter = filter;
		hkpWorldRayCastOutput kdOutput(one);
		kdCaster.m_output = &kdOutput;
		fn_83084210(self->m_kdTree, input.m_from, input.m_to, &kdCaster);
	}
	if (self->m_useAabbTree)
		fn_82D378E8(self->m_aabbTree, input.m_from, input.m_to, &caster.m_vtbl[1], one);
}
