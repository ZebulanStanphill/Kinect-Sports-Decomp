// Removes an object as world-post-simulation listener (its listener base at +0x8). It keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

struct Object_82DC82C8 {
    void *vt;         // 0x00
    int refs;         // 0x04
    void *listener;   // 0x08: the hkpWorldPostSimulationListener
};

extern "C" void fn_82DC82C8(Object_82DC82C8 *self, hkpWorld *world)
{
    world->removeWorldPostSimulationListener(self != 0 ? (hkpWorldPostSimulationListener *)&self->listener : 0);
}
