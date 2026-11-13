// cleanupLoadedObjecthkpHingeLimitsData: the cleanup function in hkpHingeLimitsData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpHingeLimitsData {
public:
    virtual ~hkpHingeLimitsData();
};

void HK_CALL cleanupLoadedObjecthkpHingeLimitsData(void *p)
{
    static_cast<hkpHingeLimitsData *>(p)->~hkpHingeLimitsData();
}
