// hkxEnum's scalar deleting destructor (Common/SceneData/Attributes/hkxEnum.h): it calls the implicit
// destructor (fn_82E02700, emitted out of line) and frees through the class allocator. The finish constructor
// below only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkxEnum.h"

void emitVtable_82E02828(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxEnum(f); }
