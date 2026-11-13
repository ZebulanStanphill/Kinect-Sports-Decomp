// cleanupLoadedObjecthkpDisplayBindingData: the cleanup function in hkpDisplayBindingData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpDisplayBindingData {
public:
    virtual ~hkpDisplayBindingData();
};

void HK_CALL cleanupLoadedObjecthkpDisplayBindingData(void *p)
{
    static_cast<hkpDisplayBindingData *>(p)->~hkpDisplayBindingData();
}
