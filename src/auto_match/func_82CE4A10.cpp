// cleanupLoadedObjecthkOstream: the cleanup function in hkOstream's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkOstream {
public:
    virtual ~hkOstream();
};

void HK_CALL cleanupLoadedObjecthkOstream(void *p)
{
    static_cast<hkOstream *>(p)->~hkOstream();
}
