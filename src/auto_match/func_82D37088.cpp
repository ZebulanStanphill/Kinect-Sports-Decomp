// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector scalar deleting destructor (an interface without base class: global operator delete). The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkAabbTreeQueryUtils.h"

void emitVtable_82D37088(hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector *p) { p->hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::~Collector(); }
