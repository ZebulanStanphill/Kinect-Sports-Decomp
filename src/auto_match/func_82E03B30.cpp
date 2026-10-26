// cleanupLoadedObjecthkxSparselyAnimatedInt: the cleanup function in hkxSparselyAnimatedInt's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxSparselyAnimatedInt {
public:
    virtual ~hkxSparselyAnimatedInt();
};

void HK_CALL cleanupLoadedObjecthkxSparselyAnimatedInt(void *p)
{
    static_cast<hkxSparselyAnimatedInt *>(p)->~hkxSparselyAnimatedInt();
}
