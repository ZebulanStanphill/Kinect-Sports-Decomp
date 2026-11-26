// hkxEdgeSelectionChannel (Common/SceneData/Mesh/Channels/hkxEdgeSelectionChannel.h), 0x14 bytes, a
// reference-counted object with no virtual functions of its own (its vtable has hkReferencedObject's three
// slots). The layout is the game's reflection data: the hkClass constructor call in fn_83136870
// (hkxEdgeSelectionChannelClass, lbl_8323F3DC) gives the size and parent, the member list (lbl_821483DC)
// the names, types and offsets.
// Its vtable's deleting destructor is hkxAnimatedFloat's (identical code folding).
#ifndef HAVOK_HKXEDGESELECTIONCHANNEL_H
#define HAVOK_HKXEDGESELECTIONCHANNEL_H

#include "havok/hkBase.h"

class hkxEdgeSelectionChannel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxEdgeSelectionChannel(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_selectedEdges(f) {}

    hkArray<hkInt32> m_selectedEdges;   // +0x8
};

#endif
