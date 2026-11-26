// hkpSimulation's scalar deleting destructor: it calls the out-of-line destructor (fn_82DA30B8,
// ??1hkpSimulation@@UAA@XZ) and frees through the class allocator. The function below only makes the compiler
// emit the vtable, and with it the deleting destructor; it uses the header's inline finish constructor.
#include "havok/hkpSimulation.h"

void emitVtable_82D7FD30(void *p)
{
    hkFinishLoadedObjectFlag f;
    new (p) hkpSimulation(f);
}
