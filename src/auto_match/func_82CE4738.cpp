// hkSimpleLocalFrame's scalar deleting destructor ??_GhkSimpleLocalFrame@@UAAPAXI@Z (slot 0 of
// ??_7hkSimpleLocalFrame@@6B@): it calls the out-of-line destructor (82CEFFA8) and frees the object with the
// class allocator. The function at the end only makes the compiler emit the vtable and with it the destructor.
#include "havok/hkSimpleLocalFrame.h"

void emitVtable_82CE4738(void *p, hkFinishLoadedObjectFlag f) { new (p) hkSimpleLocalFrame(f); }
