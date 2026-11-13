// cleanupLoadedObjecthkReferencedObject: the cleanup function in hkReferencedObject's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkReferencedObject {
public:
    virtual ~hkReferencedObject();
};

void HK_CALL cleanupLoadedObjecthkReferencedObject(void *p)
{
    static_cast<hkReferencedObject *>(p)->~hkReferencedObject();
}
