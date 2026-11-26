// hkpAngularDashpotAction::hkpAngularDashpotAction(hkpEntity *, hkpEntity *, hkUlong)
// Built with /O2 /QVMXReserve (v0 for the quaternion copy). lbl_82186E6C is the
// 0.1f literal (__real@3dcccccd), renamed in the map.
#include "havok/hkBase.h"
#include "havok/hkpAngularDashpotAction.h"

hkpAngularDashpotAction::hkpAngularDashpotAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData)
    : hkpBinaryAction(entityA, entityB, userData), m_strength(0.1f), m_damping(0.01f)
{
    m_rotation.setIdentity();
}
