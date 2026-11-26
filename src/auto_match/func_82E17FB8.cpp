// hkObjectCopier::~hkObjectCopier() (hkObjectCopier.cpp): user-written and empty; its own vtable store is dead, leaving hkBaseObject's. PackfileObjectCopier's deleting destructor (fn_82E12620) calls it.
// hkObjectCopier (Common/Serialize/Copier/hkObjectCopier.h, 0x18 bytes).
#include "havok/hkObjectCopier.h"

hkObjectCopier::~hkObjectCopier() {}
