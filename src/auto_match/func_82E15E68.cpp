// hkContainerResourceMap's scalar deleting destructor (vtable slot 1): the implicit destructor (the string map's
// ~hkCachedHashMap, then ~hkResourceMap), then the global operator delete. The function at the end only makes the
// compiler emit the vtable; the header declares no inline constructor, so it copies an object.
#include "havok/hkContainerResourceMap.h"

inline void *operator new(unsigned int, void *p) { return p; }

void emitVtable_82E15E68(void *p, const hkContainerResourceMap *q) { new (p) hkContainerResourceMap(*q); }
