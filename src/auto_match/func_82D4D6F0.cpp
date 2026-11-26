// hkpRemoveTerminalsMoppModifier scalar deleting destructor (primary vtable): calls the user-written
// destructor (fn_82D4D580) out of line, then frees through the class allocator. The function at the end only
// makes the compiler emit the vtables.
#include "havok/hkBase.h"
#include "havok/hkpRemoveTerminalsMoppModifier.h"

void emitVtable_82D4D6F0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpRemoveTerminalsMoppModifier(f); }
