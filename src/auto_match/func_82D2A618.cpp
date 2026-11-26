// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector scalar deleting destructor (an interface without base class: global operator delete). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkAabbTreeQueryUtils.h"

void emitVtable_82D2A618(hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector *p) { p->hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector::~Collector(); }
