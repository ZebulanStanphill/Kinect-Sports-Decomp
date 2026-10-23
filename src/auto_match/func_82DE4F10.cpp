// hkpSerializedDisplayMarkerList scalar deleting destructor (compiler-generated); it calls the destructor out of
// line (??1, fn_82DE4E60). The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpSerializedDisplayMarker : public hkReferencedObject {
};

// Physics/Utilities/Serialize/Display/hkpSerializedDisplayMarkerList.h.
class hkpSerializedDisplayMarkerList : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpSerializedDisplayMarkerList(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_markers(f) {}
    virtual ~hkpSerializedDisplayMarkerList();

    hkArray<hkpSerializedDisplayMarker *> m_markers;   // +0x8
};

void emitVtable_82DE4F10(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSerializedDisplayMarkerList(f); }
