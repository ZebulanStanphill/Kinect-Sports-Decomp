// hkChainedClassNameRegistry's scalar deleting destructor: the destructor inlined, then the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkBindingClassNameRegistry.h"

void emitVtable_82E175C8(hkChainedClassNameRegistry *p) { p->hkChainedClassNameRegistry::~hkChainedClassNameRegistry(); }
