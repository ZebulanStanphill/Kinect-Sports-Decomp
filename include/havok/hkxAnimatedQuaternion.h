// hkxAnimatedQuaternion (Common/SceneData/Attributes/hkxAnimatedQuaternion.h), 0x14 bytes, a reference-
// counted object with no virtual functions of its own (its vtable has hkReferencedObject's three slots).
// The layout is the game's reflection data: the hkClass constructor call in fn_83136668
// (hkxAnimatedQuaternionClass, lbl_8323F31C) gives the size and parent, the member list (lbl_82148224) the
// names, types and offsets.
// Its vtable's deleting destructor is hkxAnimatedVector's (identical code folding).
#ifndef HAVOK_HKXANIMATEDQUATERNION_H
#define HAVOK_HKXANIMATEDQUATERNION_H

#include "havok/hkBase.h"
#include "havok/hkQuaternion.h"

class hkxAnimatedQuaternion : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxAnimatedQuaternion(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_quaternions(f) {}

    hkArray<hkQuaternion> m_quaternions;   // +0x8
};

#endif
