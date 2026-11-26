#include "havok/hkBase.h"
#include "havok/hkpCachingShapePhantom.h"
#include "havok/hkpCollisionAgent.h"
#include "havok/hkpConstraintOwner.h"

#pragma intrinsic(__vxor)

hkpCachingShapePhantom::~hkpCachingShapePhantom()
{
    hkpConstraintOwner constraintOwner;
    for (int i = m_collisionDetails.getSize() - 1; i >= 0; i--) {
        CollisionDetail &d = m_collisionDetails[i];
        d.m_agent->cleanup(constraintOwner);
    }
    m_collisionDetails.clear();
}
