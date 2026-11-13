// hkpGskBaseAgent::getClosestPoints (GSK closest point between two convex bodies, reported to a collector).
#include "havok/hkBase.h"

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

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
class hkVector4 {
public:
	HK_FORCE_INLINE hkVector4() {}
	HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
	HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
	__vector4 m_quad;
};
class hkTransform {
public:
	hkVector4 m_rotation[3];
	hkVector4 m_translation;
};

class hkpShape;
class hkpCdBody {
public:
	const hkpShape *m_shape;        // +0x0
	hkUint32 m_shapeKey;            // +0x4
	const hkTransform *m_motion;    // +0x8
	const hkpCdBody *m_parent;      // +0xc
};

struct hkpCollisionDispatcher;
struct hkpCollisionInput {
	hkpCollisionDispatcher *m_dispatcher;   // +0x0
	char m_pad4[4];
	hkReal m_tolerance;                     // +0x8
};

class hkContactPoint {
public:
	hkVector4 m_position;
	hkVector4 m_separatingNormal;
};

class hkpCdPoint {
public:
	HK_FORCE_INLINE hkpCdPoint(const hkpCdBody &a, const hkpCdBody &b) : m_cdBodyA(&a), m_cdBodyB(&b) {}
	hkContactPoint m_contact;
	const hkpCdBody *m_cdBodyA;
	const hkpCdBody *m_cdBodyB;
};

class hkpCdPointCollector {
public:
	virtual ~hkpCdPointCollector();
	virtual void addCdPoint(const hkpCdPoint &event);
};

struct hkpGskCache {
	hkUint16 m_vertices[4];
	hkUint8 m_dimA;
	hkUint8 m_dimB;
	hkUint8 m_maxDimA;
	hkUint8 m_gskFlags;
};

struct GetClosestPointInput {
	const hkTransform *m_aTb;
	const hkTransform *m_transformA;
	const hkpShape *m_shapeA;
	const hkpShape *m_shapeB;
	hkReal m_collisionTolerance;
};

struct hkpGskBaseAgent {
	char m_pad0[0xc];
	hkpGskCache m_cache;   // +0xc
};

extern "C" {
void fn_82CE6820(hkTransform *self, const hkTransform &a, const hkTransform &b);
int fn_82DD6E28(const GetClosestPointInput &input, hkpGskCache *cache, hkVector4 *separatingNormal, hkVector4 &pointOnB);
}

extern "C" void fn_82D75598(hkpGskBaseAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
{
	timer("TtGsk");
	hkTransform aTb;
	fn_82CE6820(&aTb, *bodyA.m_motion, *bodyB.m_motion);
	GetClosestPointInput in;
	in.m_shapeA = bodyA.m_shape;
	in.m_shapeB = bodyB.m_shape;
	in.m_aTb = &aTb;
	in.m_transformA = bodyA.m_motion;
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
