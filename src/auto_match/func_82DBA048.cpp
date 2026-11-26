// hkpContinuousSimulation's scalar deleting destructor ??_GhkpContinuousSimulation@@UAAPAXI@Z
// (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.h): calls the out-of-line
// destructor (fn_82DB6110), then frees through the class allocator. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkpContinuousSimulation.h"

// The header declares no inline constructor: copying an object emits the vtable.
void emitVtable_82DBA048(void *p, const void *q)
{
    new (p) hkpContinuousSimulation(*(const hkpContinuousSimulation *)q);
}
