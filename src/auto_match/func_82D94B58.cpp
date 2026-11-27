// hkpPhysicsSystem::hkpPhysicsSystem() (Physics/Utilities/Serialize/hkpPhysicsSystem.cpp): empty arrays, no
// name, user data 0, active.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystem.h"

hkpPhysicsSystem::hkpPhysicsSystem() : m_name(HK_NULL), m_userData(0), m_active(true) {}
