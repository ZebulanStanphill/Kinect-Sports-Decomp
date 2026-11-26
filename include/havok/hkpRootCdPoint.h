// hkpRootCdPoint (Physics/Collide/Query/Collector/PointCollector/hkpRootCdPoint.h), 0x30 bytes: a contact
// point with the root collidables and shape keys of its two bodies, as hkpClosestCdPointCollector::addCdPoint
// (82D75C10) fills it in. The member names follow Havok's header.
#ifndef HAVOK_HKPROOTCDPOINT_H
#define HAVOK_HKPROOTCDPOINT_H

#include "havok/hkContactPoint.h"
#include "havok/hkpShape.h"

class hkpCollidable;

struct hkpRootCdPoint {
    hkContactPoint m_contact;                 // +0x0
    const hkpCollidable *m_rootCollidableA;   // +0x20
    hkpShapeKey m_shapeKeyA;                  // +0x24
    const hkpCollidable *m_rootCollidableB;   // +0x28
    hkpShapeKey m_shapeKeyB;                  // +0x2C
};

#endif
