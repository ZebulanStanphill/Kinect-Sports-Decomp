// cleanupLoadedObjecthkpSerializedDisplayMarkerList: the cleanup function in hkpSerializedDisplayMarkerList's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSerializedDisplayMarkerList {
public:
    virtual ~hkpSerializedDisplayMarkerList();
};

void HK_CALL cleanupLoadedObjecthkpSerializedDisplayMarkerList(void *p)
{
    static_cast<hkpSerializedDisplayMarkerList *>(p)->~hkpSerializedDisplayMarkerList();
}
