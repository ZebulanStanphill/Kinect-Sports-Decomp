// hkpMouseSpringAction::hkpMouseSpringAction(hkpRigidBody *) (Physics/Utilities/Actions/MouseSpring/
// hkpMouseSpringAction.cpp), /O2 /QVMXReserve. 250.0f and 0.95f are literals (the rename map names the
// game's copies __real@437a0000 and __real@3f733333); 0.5f keeps its lbl_ name (Matching units use it).
// m_name = "..." is hkStringPtr::operator=(const char *) (82CED628).
// The constructor keeps its fn_ name too (its caller func_82DF2CD8 is otherwise C-matchable): it is forced
// inline and run on the object by an explicit constructor call, which adds no null check.
#include "havok/hkpRigidBody.h"
#include "havok/hkpMouseSpringAction.h"

HK_FORCE_INLINE hkpMouseSpringAction::hkpMouseSpringAction(hkpRigidBody *rb)
    : hkpUnaryAction(rb),
      m_springDamping(0.5f),
      m_springElasticity(0.3f),
      m_maxRelativeForce(250.0f),
      m_objectDamping(0.95f)
{
    m_positionInRbLocal.setZero4();
    m_mousePositionInWorld.setZero4();
    m_shapeKey = hkUint32(-1);
    setName("hkpMouseSpringAction");
}

extern "C" hkpMouseSpringAction *fn_82DF2948(hkpMouseSpringAction *self, hkpRigidBody *rb)
{
    self->hkpMouseSpringAction::hkpMouseSpringAction(rb);
    return self;
}
