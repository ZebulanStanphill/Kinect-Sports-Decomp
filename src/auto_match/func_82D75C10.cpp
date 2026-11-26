// hkpClosestCdPointCollector::addCdPoint: keeps the closest point reported so far.
#include "havok/hkpCollidable.h"
#include "havok/hkpCdPoint.h"
#include "havok/hkpClosestCdPointCollector.h"

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
