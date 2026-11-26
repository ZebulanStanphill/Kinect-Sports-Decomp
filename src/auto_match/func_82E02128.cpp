// hkxAnimatedMatrix's scalar deleting destructor (Common/SceneData/Attributes/hkxAnimatedMatrix.h): it calls the
// implicit destructor (fn_82E020B8, emitted out of line) and frees through the class allocator. The constructor
// below only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkxAnimatedMatrix.h"

void emitVtable_82E02128(void *p) { new (p) hkxAnimatedMatrix; }
