// cleanupLoadedObjecthkxSparselyAnimatedEnum: the cleanup function in hkxSparselyAnimatedEnum's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxSparselyAnimatedEnum {
public:
    virtual ~hkxSparselyAnimatedEnum();
};

void HK_CALL cleanupLoadedObjecthkxSparselyAnimatedEnum(void *p)
{
    static_cast<hkxSparselyAnimatedEnum *>(p)->~hkxSparselyAnimatedEnum();
}
