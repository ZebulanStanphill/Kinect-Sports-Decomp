// hkpCdPoint (Physics/Collide/Query/Collector/PointCollector/hkpCdPoint.h), 0x30 bytes: a contact point
// with the two bodies it was found between. The game's version has no unwelded normal: the bodies follow
// the contact point at +0x20 and +0x24 (hkpClosestCdPointCollector::addCdPoint 82D75C10, 82D5C0E0, the
// GSK agent 82D75598). The member names follow Havok's header.
#ifndef HAVOK_HKPCDPOINT_H
#define HAVOK_HKPCDPOINT_H

#include "havok/hkContactPoint.h"

class hkpCdBody;

class hkpCdPoint {
public:
    HK_FORCE_INLINE hkpCdPoint(const hkpCdBody &a, const hkpCdBody &b) : m_cdBodyA(&a), m_cdBodyB(&b) {}

    hkContactPoint m_contact;    // +0x0
    const hkpCdBody *m_cdBodyA;  // +0x20
    const hkpCdBody *m_cdBodyB;  // +0x24
};

#endif
