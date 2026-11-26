// hkRenamedClassNameRegistry's scalar deleting destructor: the user-written destructor inlined, then the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkRenamedClassNameRegistry.h"

void emitVtable_82E12588(hkRenamedClassNameRegistry *p) { p->hkRenamedClassNameRegistry::~hkRenamedClassNameRegistry(); }
