#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystem.h"

hkpPhysicsSystem::~hkpPhysicsSystem()
{
    removeAll();
}
