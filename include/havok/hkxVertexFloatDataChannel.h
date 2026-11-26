// hkxVertexFloatDataChannel (Common/SceneData/Mesh/Channels/hkxVertexFloatDataChannel.h), 0x18 bytes, a
// reference-counted object with no virtual functions of its own (its vtable has hkReferencedObject's three
// slots). The layout is the game's reflection data: the hkClass constructor call in fn_83137CB0
// (hkxVertexFloatDataChannelClass, lbl_8323FA1C) gives the size and parent, the member list (lbl_83186A8C)
// the names, types and offsets, and the enum list (lbl_821496D0) VertexFloatDimensions and its items.
// Its vtable's deleting destructor is hkxAnimatedFloat's (identical code folding).
#ifndef HAVOK_HKXVERTEXFLOATDATACHANNEL_H
#define HAVOK_HKXVERTEXFLOATDATACHANNEL_H

#include "havok/hkBase.h"

class hkxVertexFloatDataChannel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    enum VertexFloatDimensions {
        FLOAT = 0,
        DISTANCE = 1,
        ANGLE = 2
    };
    hkxVertexFloatDataChannel(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_perVertexFloats(f) {}

    hkArray<hkReal> m_perVertexFloats;   // +0x8
    hkUint8 m_dimensions;                // +0x14  hkEnum<VertexFloatDimensions, hkUint8>
};

#endif
