// cleanupLoadedObjecthkpAabbPhantom: the cleanup function in hkpAabbPhantom's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpAabbPhantom {
public:
    virtual ~hkpAabbPhantom();
};

void HK_CALL cleanupLoadedObjecthkpAabbPhantom(void *p)
{
    static_cast<hkpAabbPhantom *>(p)->~hkpAabbPhantom();
}
