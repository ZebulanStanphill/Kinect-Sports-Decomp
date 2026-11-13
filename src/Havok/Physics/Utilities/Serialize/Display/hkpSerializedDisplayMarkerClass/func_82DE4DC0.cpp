// cleanupLoadedObjecthkpSerializedDisplayMarker: the cleanup function in hkpSerializedDisplayMarker's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSerializedDisplayMarker {
public:
    virtual ~hkpSerializedDisplayMarker();
};

void HK_CALL cleanupLoadedObjecthkpSerializedDisplayMarker(void *p)
{
    static_cast<hkpSerializedDisplayMarker *>(p)->~hkpSerializedDisplayMarker();
}
