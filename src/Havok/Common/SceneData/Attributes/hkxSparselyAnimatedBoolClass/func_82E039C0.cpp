// cleanupLoadedObjecthkxSparselyAnimatedBool: the cleanup function in hkxSparselyAnimatedBool's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxSparselyAnimatedBool {
public:
    virtual ~hkxSparselyAnimatedBool();
};

void HK_CALL cleanupLoadedObjecthkxSparselyAnimatedBool(void *p)
{
    static_cast<hkxSparselyAnimatedBool *>(p)->~hkxSparselyAnimatedBool();
}
