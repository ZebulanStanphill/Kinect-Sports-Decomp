// hkxVertexVectorDataChannel (Common/SceneData/Mesh/Channels/hkxVertexVectorDataChannel.h), 0x14 bytes, a
// reference-counted object with no virtual functions of its own (its vtable has hkReferencedObject's three
// slots). The layout is the game's reflection data: the hkClass constructor call in fn_83137E20
// (hkxVertexVectorDataChannelClass, lbl_8323FAAC) gives the size and parent, the member list (lbl_821497CC)
// the names, types and offsets.
// Its vtable's deleting destructor is hkxAnimatedVector's (identical code folding).
#ifndef HAVOK_HKXVERTEXVECTORDATACHANNEL_H
#define HAVOK_HKXVERTEXVECTORDATACHANNEL_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkxVertexVectorDataChannel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxVertexVectorDataChannel(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_perVertexVectors(f) {}

    hkArray<hkVector4> m_perVertexVectors;   // +0x8
};

#endif
