// hkpSerializedDisplayMarkerList (Physics/Utilities/Serialize/Display/hkpSerializedDisplayMarkerList.h), 0x14
// bytes: a list of display markers. The size and the member come from the game's hkClass (initialiser 83134DD8,
// members lbl_82144970: "markers", an array of pointers to hkpSerializedDisplayMarker at +0x8). The destructor is
// out of line (82DE4E60: it removes the references to the markers); the deleting destructor is 82DE4F10. The
// finish constructor is inline (82DE4E38, 82DE4E50).
#ifndef HAVOK_HKPSERIALIZEDDISPLAYMARKERLIST_H
#define HAVOK_HKPSERIALIZEDDISPLAYMARKERLIST_H

#include "havok/hkBase.h"

class hkpSerializedDisplayMarker;

class hkpSerializedDisplayMarkerList : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpSerializedDisplayMarkerList(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_markers(f) {}
    virtual ~hkpSerializedDisplayMarkerList();

    hkArray<hkpSerializedDisplayMarker *> m_markers;   // +0x8
};

#endif
