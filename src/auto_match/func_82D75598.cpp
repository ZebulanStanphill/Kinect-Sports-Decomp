// hkpGskBaseAgent::getClosestPoints (GSK closest point between two convex bodies, reported to a collector).
#include "havok/hkMonitorStream.h"
#include "havok/hkpCdPoint.h"
#include "havok/hkpGskBaseAgent.h"

extern "C" unsigned __int64 __mftb();
static HK_FORCE_INLINE void timer(const char *s)
{
    hkMonitorStream *t = &hkMonitorStream::getInstance();
    if (t->m_end < t->m_capacityMinus16) {
        hkMonitorStream::TimerCommand *p = reinterpret_cast<hkMonitorStream::TimerCommand *>(t->m_end);
        p->m_commandAndMonitor = s;
        p->m_time0 = (hkUint32)__mftb();
        t->m_end = reinterpret_cast<char *>(p + 1);
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

void hkpGskBaseAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
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
	if (fn_82DD6E28(in, &m_cache, &separatingNormal, pointOnB) == 0) {
		hkpCdPoint event(bodyA, bodyB);
		event.m_contact.m_position = pointOnB;
		event.m_contact.m_separatingNormal = separatingNormal;
		collector.addCdPoint(event);
	}
	timer("Et");
}
