// hkxAnimatedVector::~hkxAnimatedVector, the implicit destructor (Common/SceneData/Attributes/hkxAnimatedVector.h),
// emitted out of line after hkxAnimatedVector's reflection functions; identical code also serves
// hkxAnimatedQuaternion and hkxVertexVectorDataChannel (folded). It destroys the hkArray of hkVector4 at +0x8.
// The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkxAnimatedVector.h"

void emitVtable_82E02230(void *p) { new (p) hkxAnimatedVector; }
