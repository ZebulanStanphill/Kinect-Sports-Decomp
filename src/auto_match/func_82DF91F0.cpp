// cleanupLoadedObjecthkpTyremarksInfo: the cleanup function in hkpTyremarksInfo's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpTyremarksInfo {
public:
    virtual ~hkpTyremarksInfo();
};

void HK_CALL cleanupLoadedObjecthkpTyremarksInfo(void *p)
{
    static_cast<hkpTyremarksInfo *>(p)->~hkpTyremarksInfo();
}
