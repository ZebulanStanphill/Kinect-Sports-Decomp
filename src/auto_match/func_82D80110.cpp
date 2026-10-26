// cleanupLoadedObjecthkpWorldCinfo: the cleanup function in hkpWorldCinfo's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpWorldCinfo {
public:
    virtual ~hkpWorldCinfo();
};

void HK_CALL cleanupLoadedObjecthkpWorldCinfo(void *p)
{
    static_cast<hkpWorldCinfo *>(p)->~hkpWorldCinfo();
}
