// hkxAnimatedMatrix (Common/SceneData/Attributes/hkxAnimatedMatrix.h), 0x18 bytes, a reference-counted
// object with no virtual functions of its own (its vtable has hkReferencedObject's three slots). The layout
// is the game's reflection data: the hkClass constructor call in fn_831365E8 (hkxAnimatedMatrixClass,
// lbl_8323F2EC) gives the size and parent, the member list (lbl_83186380) the names, types and offsets.
// Its implicit destructor (82E020B8) and scalar deleting destructor (82E02128) are emitted out of line.
#ifndef HAVOK_HKXANIMATEDMATRIX_H
#define HAVOK_HKXANIMATEDMATRIX_H

#include "havok/hkBase.h"
#include "havok/hkMatrix4.h"

class hkxAnimatedMatrix : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxAnimatedMatrix() {}
    hkxAnimatedMatrix(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_matrices(f) {}

    hkArray<hkMatrix4> m_matrices;   // +0x8
    hkUint8 m_hint;                  // +0x14  hkEnum<hkxAttribute::Hint, hkUint8>
};

#endif
