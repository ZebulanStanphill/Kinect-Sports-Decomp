// hkpShapePhantom::hkpShapePhantom(const hkpShape *, const hkTransform &)
// (Physics/Dynamics/Phantom/hkpShapePhantom.cpp).
#include "havok/hkBase.h"
#include "havok/hkpShapePhantom.h"

hkpShapePhantom::hkpShapePhantom(const hkpShape *shape, const hkTransform &transform) : hkpPhantom(shape)
{
    hkQuaternion q;
    q.set(transform.getRotation());
    m_motionState.initMotionState(transform.getTranslation(), q);
    m_collidable.setMotionState(&m_motionState);
}
