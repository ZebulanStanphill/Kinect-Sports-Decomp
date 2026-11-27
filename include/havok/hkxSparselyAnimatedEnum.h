// hkxSparselyAnimatedEnum (Common/SceneData/Attributes/hkxSparselyAnimatedEnum.h), 0x24 bytes: an
// hkxSparselyAnimatedInt whose values belong to an hkxEnum. The layout is the game's reflection data: the
// hkClass constructor call in fn_831369D8 (hkxSparselyAnimatedEnumClass, lbl_8323F46C) gives the size and
// the parent (hkxSparselyAnimatedIntClass), the member list (lbl_82148464) the one member, "enum", a pointer
// to an hkxEnum at +0x20.
// The scalar deleting destructor (82E027A0) releases m_enum as hkRefPtr's destructor does (removeReference if
// set, then clear it) before it calls hkxSparselyAnimatedInt's destructor (82E025E0).
#ifndef HAVOK_HKXSPARSELYANIMATEDENUM_H
#define HAVOK_HKXSPARSELYANIMATEDENUM_H

#include "havok/hkxEnum.h"
#include "havok/hkxSparselyAnimatedInt.h"

class hkxSparselyAnimatedEnum : public hkxSparselyAnimatedInt {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxSparselyAnimatedEnum(hkFinishLoadedObjectFlag f) : hkxSparselyAnimatedInt(f), m_enum(f) {}

    hkRefPtr<hkxEnum> m_enum;   // +0x20
};

#endif
