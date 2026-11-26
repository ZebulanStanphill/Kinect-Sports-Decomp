// hkpMouseSpringAction::hkpMouseSpringAction(hkpRigidBody *) (Physics/Utilities/Actions/MouseSpring/
// hkpMouseSpringAction.cpp), /O2 /QVMXReserve. 250.0f and 0.95f are literals (the rename map names the
// game's copies __real@437a0000 and __real@3f733333); 0.5f keeps its lbl_ name (Matching units use it).
// m_name = "..." is hkStringPtr::operator=(const char *), fn_82CED628, which keeps its fn_ name.
// The constructor keeps its fn_ name too (its caller func_82DF2CD8 is otherwise C-matchable): it is forced
// inline and run on the object by an explicit constructor call, which adds no null check.
#include "havok/hkpAction.h"
#include "havok/hkpRigidBody.h"

extern "C" void fn_82CED628(hkStringPtr *self, const char *s);   // hkStringPtr::operator=(const char *)

class hkpMouseSpringAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    typedef void (*mouseSpringAppliedCallback)(hkpMouseSpringAction *, hkReal, const hkVector4 &);
    HK_FORCE_INLINE hkpMouseSpringAction(hkpRigidBody *rb = HK_NULL);

    hkVector4 m_positionInRbLocal;      // +0x20
    hkVector4 m_mousePositionInWorld;   // +0x30
    hkReal m_springDamping;             // +0x40
    hkReal m_springElasticity;          // +0x44
    hkReal m_maxRelativeForce;          // +0x48
    hkReal m_objectDamping;             // +0x4C
    hkUint32 m_shapeKey;                // +0x50
    hkArray<mouseSpringAppliedCallback> m_applyCallbacks;   // +0x54
};

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
    fn_82CED628(&m_name, "hkpMouseSpringAction");   // setName
}

extern "C" hkpMouseSpringAction *fn_82DF2948(hkpMouseSpringAction *self, hkpRigidBody *rb)
{
    self->hkpMouseSpringAction::hkpMouseSpringAction(rb);
    return self;
}
