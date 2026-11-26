// hkpKeyframedRigidMotion::~hkpKeyframedRigidMotion (Physics/Dynamics/Motion/Rigid/hkpKeyframedRigidMotion.cpp).
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

class hkpParametricCurve : public hkReferencedObject {
};

hkpKeyframedRigidMotion::~hkpKeyframedRigidMotion()
{
    if (m_savedMotion)
        m_savedMotion->removeReference();
}
