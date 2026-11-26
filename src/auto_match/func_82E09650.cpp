// hkDynamicClassNameRegistry scalar deleting destructor (identical code also serves hkDefaultClassNameRegistry and ValidatedClassNameRegistry): implicit destructor, then the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkDynamicClassNameRegistry.h"

void emitVtable_82E09650(void *p) { new (p) hkDynamicClassNameRegistry; }
