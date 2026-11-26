// hkxVertexSelectionChannel (Common/SceneData/Mesh/Channels/hkxVertexSelectionChannel.h), 0x14 bytes, a
// reference-counted object with no virtual functions of its own (its vtable has hkReferencedObject's three
// slots). The layout is the game's reflection data: the hkClass constructor call in fn_83137DA8
// (hkxVertexSelectionChannelClass, lbl_8323FA7C) gives the size and parent, the member list (lbl_82149774)
// the names, types and offsets.
// Its vtable's deleting destructor is hkxAnimatedFloat's (identical code folding).
#ifndef HAVOK_HKXVERTEXSELECTIONCHANNEL_H
#define HAVOK_HKXVERTEXSELECTIONCHANNEL_H

#include "havok/hkBase.h"

class hkxVertexSelectionChannel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxVertexSelectionChannel(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_selectedVertices(f) {}

    hkArray<hkInt32> m_selectedVertices;   // +0x8
};

#endif
