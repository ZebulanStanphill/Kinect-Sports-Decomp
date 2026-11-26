// hkpSimpleMeshShape::~hkpSimpleMeshShape, the implicit destructor (Physics/Collide/Shape/Deprecated/SimpleMesh/
// hkpSimpleMeshShape.h), emitted out of line: the deleting destructor (fn_82D3B160) calls it. It destroys the
// material index, triangle and vertex hkArrays, then the bases (hkpShapeContainer at +0x10). The copy at the
// end only makes the compiler emit the vtable (the header declares no inline constructor).
#include "havok/hkpSimpleMeshShape.h"

void emitVtable_82D3B058(void *p, const void *q)
{
    new (p) hkpSimpleMeshShape(*(const hkpSimpleMeshShape *)q);
}
