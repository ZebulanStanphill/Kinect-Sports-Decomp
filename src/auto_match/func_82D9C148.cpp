#include "havok/hkBase.h"
#include "havok/hkpCachingShapePhantom.h"
#include "havok/hkpCollisionAgent.h"
#include "havok/hkpConstraintData.h"

#pragma intrinsic(__vxor)

// hkpConstraintOwner (Physics/Dynamics/Constraint/hkpConstraintOwner.h), 0x18 bytes; the collision agents'
// cleanup takes one. Its constructor leaves m_constraintInfo alone.
class hkpConstraintOwner : public hkReferencedObject {
public:
    hkpConstraintOwner() {}

    hkpConstraintInfo m_constraintInfo;   // +0x8
};

hkpCachingShapePhantom::~hkpCachingShapePhantom()
{
    hkpConstraintOwner constraintOwner;
    for (int i = m_collisionDetails.getSize() - 1; i >= 0; i--) {
        CollisionDetail &d = m_collisionDetails[i];
        d.m_agent->cleanup(constraintOwner);
    }
    m_collisionDetails.clear();
}
