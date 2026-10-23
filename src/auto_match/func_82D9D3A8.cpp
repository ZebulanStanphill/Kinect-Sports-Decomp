// hkpKeyframedRigidMotion::~hkpKeyframedRigidMotion (Physics/Dynamics/Motion/Rigid/hkpKeyframedRigidMotion.cpp).
#include "havok/hkBase.h"

class hkpConstraintMotor : public hkReferencedObject {
};
class hkpParametricCurve : public hkReferencedObject {
};

class hkpMotion : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
};

class hkpKeyframedRigidMotion : public hkpMotion {
public:
    virtual ~hkpKeyframedRigidMotion();

    char m_motionData[0x118 - 0x8];       // +0x8  hkpMotion's members
    hkpMotion *m_savedMotion;             // +0x118
};

hkpKeyframedRigidMotion::~hkpKeyframedRigidMotion()
{
    if (m_savedMotion)
        m_savedMotion->removeReference();
}
