// cleanupLoadedObjecthkxSparselyAnimatedString: the cleanup function in hkxSparselyAnimatedString's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxSparselyAnimatedString {
public:
    virtual ~hkxSparselyAnimatedString();
};

void HK_CALL cleanupLoadedObjecthkxSparselyAnimatedString(void *p)
{
    static_cast<hkxSparselyAnimatedString *>(p)->~hkxSparselyAnimatedString();
}
