// hkpClosestCdPointCollector::addCdPoint: keeps the closest point reported so far.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;

class hkVector4 {
public:
	HK_FORCE_INLINE hkVector4() {}
	HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
	HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
	__vector4 m_quad;
};

class hkContactPoint {
public:
	HK_FORCE_INLINE hkReal getDistance() const { return m_separatingNormal.m_quad.f[3]; }
	hkVector4 m_position;
	hkVector4 m_separatingNormal;
};

class hkpCdBody {
public:
	const hkpCdBody *getRootCollidable() const
	{
		const hkpCdBody *body = this;
		while (body->m_parent)
			body = body->m_parent;
		return body;
	}

	const void *m_shape;         // +0x0
	hkUint32 m_shapeKey;         // +0x4
	const void *m_motion;        // +0x8
	const hkpCdBody *m_parent;   // +0xC
};

class hkpCdPoint {
public:
	hkContactPoint m_contact;
	const hkpCdBody *m_cdBodyA;
	const hkpCdBody *m_cdBodyB;
};

struct hkpRootCdPoint {
	hkContactPoint m_contact;               // +0x0
	const hkpCdBody *m_rootCollidableA;     // +0x20
	hkUint32 m_shapeKeyA;                   // +0x24
	const hkpCdBody *m_rootCollidableB;     // +0x28
	hkUint32 m_shapeKeyB;                   // +0x2C
};

struct hkpClosestCdPointCollector {
	void *m_vtable;                // +0x0
	hkReal m_earlyOutDistance;     // +0x4
	hkpRootCdPoint m_hitPoint;     // +0x10
};

extern "C" void fn_82D75C10(hkpClosestCdPointCollector *self, const hkpCdPoint &event)
{
	if (self->m_hitPoint.m_rootCollidableA == 0 || event.m_contact.getDistance() < self->m_hitPoint.m_contact.getDistance()) {
		self->m_hitPoint.m_contact = event.m_contact;
		self->m_hitPoint.m_rootCollidableA = event.m_cdBodyA->getRootCollidable();
		self->m_hitPoint.m_shapeKeyA = event.m_cdBodyA->m_shapeKey;
		self->m_hitPoint.m_rootCollidableB = event.m_cdBodyB->getRootCollidable();
		self->m_hitPoint.m_shapeKeyB = event.m_cdBodyB->m_shapeKey;
		self->m_earlyOutDistance = event.m_contact.getDistance();
	}
}
