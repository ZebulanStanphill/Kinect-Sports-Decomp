// hkpMeshShape::~hkpMeshShape, the implicit destructor, emitted out of line: the deleting destructors of
// hkpMeshShape and hkpFastMeshShape (fn_82D3A410, folded) call it. It destroys the welding info and
// subpart hkArrays, then the bases. The function at the end only makes the compiler emit the vtable, and
// with it the destructor; it copies an object because the header declares no inline constructor.
#include "havok/hkpMeshShape.h"

void emitVtable_82D3A2E0(void *p, const hkpMeshShape *q) { new (p) hkpMeshShape(*q); }
