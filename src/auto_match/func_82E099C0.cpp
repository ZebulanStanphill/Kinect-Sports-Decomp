// hkVtableClassRegistry scalar deleting destructor: implicit destructor (the hkPointerMap member), then the class
// allocator. The constructor is out of line (func_82E09800); the implicit copy constructor below only makes the
// compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkVtableClassRegistry.h"

void emitVtable_82E099C0(void *p, const hkVtableClassRegistry &other) { new (p) hkVtableClassRegistry(other); }
