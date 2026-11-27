// A world function (Physics/Dynamics/World/hkpWorld.cpp) that collects the world into a new
// hkpPhysicsSystem: it constructs the system, fills it through its helpers and copies one byte the
// helper fn_82D82548 returns into the system's m_active. The helpers and the function keep their fn_
// names.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystem.h"

class hkpWorld;
extern "C" {
void fn_82D82418(void *tmp, const hkpWorld *world, hkpPhysicsSystem *sys);
hkBool *fn_82D82548(void *tmp, const hkpWorld *world, hkpPhysicsSystem *sys);
void fn_82D828D0(const hkpWorld *world, hkpPhysicsSystem *sys);
void fn_82D82710(const hkpWorld *world, hkpPhysicsSystem *sys);
void fn_82D827B8(const hkpWorld *world, hkpPhysicsSystem *sys);
}

extern "C" hkpPhysicsSystem *fn_82D829B8(const hkpWorld *world)
{
    char tmp[8];
    hkpPhysicsSystem *sys = new hkpPhysicsSystem();
    fn_82D82418(tmp, world, sys);
    sys->m_active = *fn_82D82548(tmp, world, sys);
    fn_82D828D0(world, sys);
    fn_82D82710(world, sys);
    fn_82D827B8(world, sys);
    return sys;
}
