// hkpMotorAction::hkpMotorAction(hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain)
// (Havok 2010, Physics/Utilities/Actions/Motor/hkpMotorAction.cpp). Havok code, /O2 /QVMXReserve.
// It keeps its fn_ name (the NonMatching C unit func_82DF1F20 calls it).
// A vector member is copy-constructed through a vector register here (see havok/hkVector4.h).
#define HK_VECTOR4_COPY_CONSTRUCTOR
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpAction.h"

// Havok's global vector of four 0.5s at 0x82132D70, in its table of vector constants. It is a named
// object, not a compiler constant: a `const __vector4` literal is materialised later (77.98%).
class hkpRigidBody;

class hkpMotorAction : public hkpUnaryAction {
public:
    hkpMotorAction(hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain);
    virtual ~hkpMotorAction();

    hkVector4 m_axis;      // +0x20
    hkReal m_spinRate;     // +0x30
    hkReal m_gain;         // +0x34
    hkBool m_active;       // +0x38
};

HK_FORCE_INLINE hkpMotorAction::hkpMotorAction(hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain)
    : hkpUnaryAction((hkpEntity *)body), m_axis(axis), m_spinRate(spinRate), m_gain(gain), m_active(true)
{
    m_axis.normalize4();
}

extern "C" hkpMotorAction *fn_82DF1E50(hkpMotorAction *self, hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain)
{
    self->hkpMotorAction::hkpMotorAction(body, axis, spinRate, gain);
    return self;
}
