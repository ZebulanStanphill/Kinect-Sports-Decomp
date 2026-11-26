// hkxAnimatedVector (Common/SceneData/Attributes/hkxAnimatedVector.h), 0x18 bytes, a reference-counted
// object with no virtual functions of its own (its vtable has hkReferencedObject's three slots). The layout
// is the game's reflection data: the hkClass constructor call in fn_831366F8 (hkxAnimatedVectorClass,
// lbl_8323F34C) gives the size and parent, the member list (lbl_83186414) the names, types and offsets.
// Its implicit destructor (82E02230) and scalar deleting destructor (82E022A0) are emitted out of line; the
// deleting destructor also serves hkxAnimatedQuaternion and hkxVertexVectorDataChannel (identical code
// folding).
#ifndef HAVOK_HKXANIMATEDVECTOR_H
#define HAVOK_HKXANIMATEDVECTOR_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkxAnimatedVector : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxAnimatedVector() {}
    hkxAnimatedVector(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_vectors(f) {}

    hkArray<hkVector4> m_vectors;   // +0x8
    hkUint8 m_hint;                 // +0x14  hkEnum<hkxAttribute::Hint, hkUint8>
};

#endif
