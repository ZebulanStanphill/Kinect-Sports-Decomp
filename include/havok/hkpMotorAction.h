// hkpMotorAction (Physics/Utilities/Actions/Motor/hkpMotorAction.h), 0x40 bytes: an action that spins its body about
// an axis. The layout is the game's: the constructor (out of line as fn_82DF1E50, which keeps its fn_ name; its unit
// defines it forced inline) copies the axis (+0x20) and normalizes it, stores the spin rate (+0x30) and the gain
// (+0x34) and sets m_active (+0x38). The class has no destructor of its own: slot 0 of its vtable
// (??_7hkpMotorAction@@6B@, 8 slots) is a scalar deleting destructor shared with hkpReorientAction (82DE4C28) that
// runs hkpUnaryAction's. applyAction (+0xC, 82DF1FC0) and clone (+0x1C, 82DF1F20) are its own; hkpAction.h does not
// declare those virtual functions yet.
#ifndef HAVOK_HKPMOTORACTION_H
#define HAVOK_HKPMOTORACTION_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpAction.h"

class hkpRigidBody;

class hkpMotorAction : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpMotorAction(hkpRigidBody *body, const hkVector4 &axis, hkReal spinRate, hkReal gain);
    hkpMotorAction(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}

    hkVector4 m_axis;    // +0x20
    hkReal m_spinRate;   // +0x30
    hkReal m_gain;       // +0x34
    hkBool m_active;     // +0x38
};

#endif
