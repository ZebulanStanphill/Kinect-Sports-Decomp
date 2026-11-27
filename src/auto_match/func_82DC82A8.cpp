// Adds an object as world-post-simulation listener (its listener base at +0x8). It keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

struct Obj_82DC82A8 {
    int unk0;
    int unk4;
    int base;   // +0x08: the hkpWorldPostSimulationListener
};

extern "C" void fn_82DC82A8(Obj_82DC82A8 *obj, hkpWorld *world)
{
    world->addWorldPostSimulationListener(obj != 0 ? (hkpWorldPostSimulationListener *)&obj->base : 0);
}
