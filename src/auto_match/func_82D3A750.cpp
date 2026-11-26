// hkMoppBvTreeShapeBase scalar deleting destructor (Physics/Collide/Shape/Compound/Tree/Mopp/
// hkpMoppBvTreeShape.h): the inline destructor releases m_code, then the class allocator's delete.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkMoppBvTreeShapeBase.h"

void emitVtable_82D3A750(hkMoppBvTreeShapeBase *p) { p->hkMoppBvTreeShapeBase::~hkMoppBvTreeShapeBase(); }
