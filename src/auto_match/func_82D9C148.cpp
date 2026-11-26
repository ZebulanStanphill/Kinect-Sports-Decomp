#include "havok/hkBase.h"
#include "havok/hkpCachingShapePhantom.h"
#include "havok/hkpCollisionAgent.h"

#pragma intrinsic(__vxor)

extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

// hkQuaternion::set(const hkRotation &) is out of line (fn_82CE5990).
extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

struct hkpConstraintInfo {
    int m_maxSizeOfSchema;
    int m_sizeOfSchemas;
    int m_numSolverResults;
    int m_numSolverElemTemps;
};

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
