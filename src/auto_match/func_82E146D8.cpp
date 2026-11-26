// hkResourceMap's scalar deleting destructor (vtable slot 1): the user-written destructor stores the vtable, then the global operator delete. The function at the end only makes the compiler emit the vtable.
// hkResourceMap (Common/Serialize/Resource/hkResourceMap.h): a root interface
// (RTTI: no bases) whose destructor is user-written and in vtable slot 1;
// deleting one uses the global operator delete (fn_8265CA20).
#include "havok/hkResourceMap.h"

void emitVtable_82E146D8(hkResourceMap *p) { p->hkResourceMap::~hkResourceMap(); }
