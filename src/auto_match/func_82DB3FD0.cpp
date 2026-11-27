// Releases the world's collision callback utility (hkpWorld +0x1C0) once its use count (+0x10) drops to zero:
// removes it as world-post-simulation listener (through fn_82DC82C8), constraint and world-deletion listener
// (bases at +0x8 and +0xC), then releases it. It keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

extern "C" void fn_82DC82C8(void *self, hkpWorld *world);

extern "C" void fn_82DB3FD0(hkpWorld *world)
{
    char *util = (char *)world->m_collisionCallbackUtil;
    int n = *(int *)(util + 0x10) - 1;
    *(int *)(util + 0x10) = n;
    if (n == 0) {
        fn_82DC82C8(util + 0x14, world);
        world->removeConstraintListener((hkpConstraintListener *)(util + 8));
        world->removeWorldDeletionListener((hkpWorldDeletionListener *)(util + 0xc));
        fn_82CE4118((hkReferencedObject *)util);
    }
}
