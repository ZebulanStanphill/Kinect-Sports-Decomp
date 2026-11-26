// hkpBroadPhase scalar deleting destructor: calls the out-of-line, user-written
// ~hkpBroadPhase (fn_83096048, ??1hkpBroadPhase@@UAA@XZ), then the class allocator's
// delete. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpBroadPhase.h"

void emitVtable_830960C8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpBroadPhase(f); }
