// hkxVertexIntDataChannel (Common/SceneData/Mesh/Channels/hkxVertexIntDataChannel.h), 0x14 bytes, a
// reference-counted object with no virtual functions of its own (its vtable has hkReferencedObject's three
// slots). The layout is the game's reflection data: the hkClass constructor call in fn_83137D30
// (hkxVertexIntDataChannelClass, lbl_8323FA4C) gives the size and parent, the member list (lbl_82149720)
// the names, types and offsets.
// Its vtable's deleting destructor is hkxAnimatedFloat's (identical code folding).
#ifndef HAVOK_HKXVERTEXINTDATACHANNEL_H
#define HAVOK_HKXVERTEXINTDATACHANNEL_H

#include "havok/hkBase.h"

class hkxVertexIntDataChannel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxVertexIntDataChannel(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_perVertexInts(f) {}

    hkArray<hkInt32> m_perVertexInts;   // +0x8
};

#endif
