// hkxEnum (Common/SceneData/Attributes: its reflection data and vtable lie in hkxSparselyAnimatedEnumClass.cpp's
// .rdata, between hkxSparselyAnimatedEnum's member list and its name), 0x14 bytes: the names and values of an
// enum that an hkxSparselyAnimatedEnum animates. A reference-counted object with no virtual functions of its
// own (its vtable has hkReferencedObject's three slots). The layout is the game's reflection data: hkxEnumClass
// (fn_83136958, lbl_8323F43C: size 0x14, member list lbl_8214844C) and hkxEnumItemClass (fn_831368E8,
// lbl_8323F40C: size 8, member list lbl_8214841C).
// Its implicit destructor (82E02700: the items' names first to last, then the array) and scalar deleting
// destructor (82E02828) are emitted out of line.
#ifndef HAVOK_HKXENUM_H
#define HAVOK_HKXENUM_H

#include "havok/hkBase.h"

class hkxEnum : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    // "hkxEnumItem" in the reflection data.
    struct Item {
        int m_value;            // +0x0
        hkStringPtr m_name;     // +0x4
    };
    hkxEnum(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_items(f) {}

    hkArray<Item> m_items;      // +0x8
};

#endif
