// hkxAnimatedMatrix::~hkxAnimatedMatrix, the implicit destructor (Common/SceneData/Attributes/hkxAnimatedMatrix.h),
// emitted out of line after hkxAnimatedMatrix's reflection functions. It destroys the hkArray of hkMatrix4 at +0x8.
// The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkxAnimatedMatrix.h"

void emitVtable_82E020B8(void *p) { new (p) hkxAnimatedMatrix; }
