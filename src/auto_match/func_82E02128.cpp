// hkxAnimatedMatrix's scalar deleting destructor (Common/SceneData/Attributes/hkxAnimatedMatrix.h): it calls the
// implicit destructor (fn_82E020B8, emitted out of line) and frees through the class allocator. The constructor
// below only makes the compiler emit the vtable, and with it the deleting destructor.
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

void emitVtable_82E02128(void *p) { new (p) hkxAnimatedMatrix; }
