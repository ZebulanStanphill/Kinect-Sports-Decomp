// hkxAnimatedVector's scalar deleting destructor (Common/SceneData/Attributes/hkxAnimatedVector.h); identical
// code also serves hkxAnimatedQuaternion and hkxVertexVectorDataChannel (folded). It calls the implicit destructor
// (fn_82E02230, emitted out of line) and frees through the class allocator. The constructor below only makes
// the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkxAnimatedVector : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxAnimatedVector() {}

    hkArray<hkVector4> m_vectors;   // +0x8
    hkUint8 m_hint;                 // +0x14
};

void emitVtable_82E022A0(void *p) { new (p) hkxAnimatedVector; }
