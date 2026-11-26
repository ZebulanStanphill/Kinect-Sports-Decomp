// hkxAnimatedVector's scalar deleting destructor (Common/SceneData/Attributes/hkxAnimatedVector.h); identical
// code also serves hkxAnimatedQuaternion and hkxVertexVectorDataChannel (folded). It calls the implicit destructor
// (fn_82E02230, emitted out of line) and frees through the class allocator. The constructor below only makes
// the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkxAnimatedVector.h"

void emitVtable_82E022A0(void *p) { new (p) hkxAnimatedVector; }
