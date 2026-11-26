// hkpShapePhantom::hkpShapePhantom(const hkpShape *, const hkTransform &)
// (Physics/Dynamics/Phantom/hkpShapePhantom.cpp).
#include "havok/hkBase.h"
#include "havok/hkpShapePhantom.h"

// hkMotionState::initMotionState(const hkVector4 &, const hkQuaternion &) is out of line (fn_830824B8);
// the header does not declare it yet.
extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

// hkQuaternion::set(const hkRotation &) is out of line (fn_82CE5990).
extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

hkpShapePhantom::hkpShapePhantom(const hkpShape *shape, const hkTransform &transform) : hkpPhantom(shape)
{
    hkQuaternion q;
    fn_82CE5990(&q, transform.getRotation());
    fn_830824B8(&m_motionState, transform.getTranslation(), q);
    m_collidable.setMotionState(&m_motionState);
}
