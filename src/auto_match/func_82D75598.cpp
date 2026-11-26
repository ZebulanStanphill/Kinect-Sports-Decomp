// hkpGskBaseAgent::getClosestPoints (GSK closest point between two convex bodies, reported to a collector).
#include "havok/hkpCdPoint.h"
#include "havok/hkpGskBaseAgent.h"

extern "C" unsigned __int64 __mftb();
struct hkMonitorStream { void *a; unsigned *next; void *b; unsigned *end; };
extern "C" hkMonitorStream *KeTlsGetValue(unsigned);
extern "C" unsigned lbl_8323B4A0;
static HK_FORCE_INLINE void timer(const char *s)
{
	hkMonitorStream *t = KeTlsGetValue(lbl_8323B4A0);
	unsigned *p = t->next;
	if (p < t->end) {
		p[0] = (unsigned)s;
		p[1] = (unsigned)__mftb();
		t->next = p + 3;
	}
}

struct GetClosestPointInput {
	const hkTransform *m_aTb;
	const hkTransform *m_transformA;
	const hkpShape *m_shapeA;
	const hkpShape *m_shapeB;
	hkReal m_collisionTolerance;
};

extern "C" {
int fn_82DD6E28(const GetClosestPointInput &input, hkpGskCache *cache, hkVector4 *separatingNormal, hkVector4 &pointOnB);
}

extern "C" void fn_82D75598(hkpGskBaseAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
{
	timer("TtGsk");
	hkTransform aTb;
	aTb.setMulInverseMul(bodyA.getTransform(), bodyB.getTransform());
	GetClosestPointInput in;
	in.m_shapeA = bodyA.m_shape;
	in.m_shapeB = bodyB.m_shape;
	in.m_aTb = &aTb;
	in.m_transformA = &bodyA.getTransform();
	in.m_collisionTolerance = input.m_tolerance;
	hkVector4 pointOnB;
	hkVector4 separatingNormal;
	if (fn_82DD6E28(in, &self->m_cache, &separatingNormal, pointOnB) == 0) {
		hkpCdPoint event(bodyA, bodyB);
		event.m_contact.m_position = pointOnB;
		event.m_contact.m_separatingNormal = separatingNormal;
		collector.addCdPoint(event);
	}
	timer("Et");
}
