// hkxAnimatedVector::~hkxAnimatedVector, the implicit destructor (Common/SceneData/Attributes/hkxAnimatedVector.h),
// emitted out of line after hkxAnimatedVector's reflection functions; identical code also serves
// hkxAnimatedQuaternion and hkxVertexVectorDataChannel (folded). It destroys the hkArray of hkVector4 at +0x8.
// The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkxAnimatedVector : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxAnimatedVector() {}

    hkArray<hkVector4> m_vectors;   // +0x8
    hkUint8 m_hint;                 // +0x14
};

void emitVtable_82E02230(void *p) { new (p) hkxAnimatedVector; }
