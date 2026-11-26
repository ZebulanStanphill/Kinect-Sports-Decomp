// hkxTriangleSelectionChannel (Common/SceneData/Mesh/Channels/hkxTriangleSelectionChannel.h), 0x14 bytes, a
// reference-counted object with no virtual functions of its own (its vtable has hkReferencedObject's three
// slots). The layout is the game's reflection data: the hkClass constructor call in fn_83137AD0
// (hkxTriangleSelectionChannelClass, lbl_8323F97C) gives the size and parent, the member list
// (lbl_82149438) the names, types and offsets.
// Its vtable's deleting destructor is hkxAnimatedFloat's (identical code folding).
#ifndef HAVOK_HKXTRIANGLESELECTIONCHANNEL_H
#define HAVOK_HKXTRIANGLESELECTIONCHANNEL_H

#include "havok/hkBase.h"

class hkxTriangleSelectionChannel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxTriangleSelectionChannel(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_selectedTriangles(f) {}

    hkArray<hkInt32> m_selectedTriangles;   // +0x8
};

#endif
