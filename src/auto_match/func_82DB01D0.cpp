// hkpSimulationIsland's scalar deleting destructor ??_GhkpSimulationIsland@@UAAPAXI@Z
// (Physics/Dynamics/World/Simulation/hkpSimulationIsland.h): calls the out-of-line destructor
// (fn_82DAFEF0), then frees through the class allocator. The function at the end only makes the compiler
// emit the vtable, and with it this function.
#include "havok/hkBase.h"
#include "havok/hkpSimulationIsland.h"

void emitVtable_82DB01D0(void *p) { new (p) hkpSimulationIsland; }
