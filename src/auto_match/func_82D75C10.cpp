// hkpClosestCdPointCollector::addCdPoint: keeps the closest point reported so far.
#include "havok/hkContactPoint.h"
#include "havok/hkpCollidable.h"

class hkpCdPoint {
public:
	hkContactPoint m_contact;
	const hkpCdBody *m_cdBodyA;
	const hkpCdBody *m_cdBodyB;
};

struct hkpRootCdPoint {
	hkContactPoint m_contact;               // +0x0
	const hkpCollidable *m_rootCollidableA; // +0x20
	hkUint32 m_shapeKeyA;                   // +0x24
	const hkpCollidable *m_rootCollidableB; // +0x28
	hkUint32 m_shapeKeyB;                   // +0x2C
};

struct hkpClosestCdPointCollector {
	void *m_vtable;                // +0x0
	hkReal m_earlyOutDistance;     // +0x4
	hkpRootCdPoint m_hitPoint;     // +0x10
};

extern "C" void fn_82D75C10(hkpClosestCdPointCollector *self, const hkpCdPoint &event)
{
	// The distance is the w of the separating normal.
	if (self->m_hitPoint.m_rootCollidableA == 0 ||
	    event.m_contact.m_separatingNormal(3) < self->m_hitPoint.m_contact.m_separatingNormal(3)) {
		self->m_hitPoint.m_contact = event.m_contact;
		self->m_hitPoint.m_rootCollidableA = event.m_cdBodyA->getRootCollidable();
		self->m_hitPoint.m_shapeKeyA = event.m_cdBodyA->m_shapeKey;
		self->m_hitPoint.m_rootCollidableB = event.m_cdBodyB->getRootCollidable();
		self->m_hitPoint.m_shapeKeyB = event.m_cdBodyB->m_shapeKey;
		self->m_earlyOutDistance = event.m_contact.m_separatingNormal(3);
	}
}
