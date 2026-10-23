// hkpSerializedDisplayMarkerList::~hkpSerializedDisplayMarkerList (Physics/Utilities/Serialize/Display/
// hkpSerializedDisplayMarkerList.h): removes the references to the markers, then the m_markers array is destroyed.
#include "havok/hkBase.h"

class hkpSerializedDisplayMarker : public hkReferencedObject {
};

class hkpSerializedDisplayMarkerList : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpSerializedDisplayMarkerList(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_markers(f) {}
    virtual ~hkpSerializedDisplayMarkerList();

    hkArray<hkpSerializedDisplayMarker *> m_markers;   // +0x8
};

hkpSerializedDisplayMarkerList::~hkpSerializedDisplayMarkerList()
{
    for (int i = 0; i < m_markers.getSize(); i++)
        fn_82CE4118(m_markers[i]);   // removeReference(); the direct call keeps the original lwzx operand order
}
