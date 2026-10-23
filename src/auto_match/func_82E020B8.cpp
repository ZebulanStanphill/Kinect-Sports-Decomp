// hkxAnimatedMatrix::~hkxAnimatedMatrix, the implicit destructor (Common/SceneData/Attributes/hkxAnimatedMatrix.h),
// emitted out of line after hkxAnimatedMatrix's reflection functions. It destroys the hkArray of hkMatrix4 at +0x8.
// The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkBase.h"

class hkMatrix4 {
public:
    hkReal m[16];
};

class hkxAnimatedMatrix : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxAnimatedMatrix() {}

    hkArray<hkMatrix4> m_matrices;   // +0x8
    hkUint8 m_hint;                  // +0x14
};

void emitVtable_82E020B8(void *p) { new (p) hkxAnimatedMatrix; }
