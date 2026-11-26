// hkxSparselyAnimatedInt (Common/SceneData/Attributes/hkxSparselyAnimatedInt.h), 0x20 bytes, a
// reference-counted object with no virtual functions of its own (its vtable has hkReferencedObject's three
// slots). The layout is the game's reflection data: the hkClass constructor call in fn_831377C8
// (hkxSparselyAnimatedIntClass, lbl_8323F89C) gives the size and parent, the member list (lbl_82149258) the
// names, types and offsets.
// The destructor is the implicit one, emitted out of line under the C name fn_82E025E0 (m_times, then
// m_ints), which hkxSparselyAnimatedEnum's deleting destructor (fn_82E027A0, a C unit) calls; the scalar
// deleting destructor is fn_82E02698.
#ifndef HAVOK_HKXSPARSELYANIMATEDINT_H
#define HAVOK_HKXSPARSELYANIMATEDINT_H

#include "havok/hkBase.h"

class hkxSparselyAnimatedInt : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxSparselyAnimatedInt(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_ints(f), m_times(f) {}

    hkArray<hkInt32> m_ints;    // +0x8
    hkArray<hkReal> m_times;    // +0x14
};

#endif
