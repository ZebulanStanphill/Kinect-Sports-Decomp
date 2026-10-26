// cleanupLoadedObjecthkpSingleShapeContainer: the cleanup function in hkpSingleShapeContainer's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSingleShapeContainer {
public:
    virtual ~hkpSingleShapeContainer();
};

void HK_CALL cleanupLoadedObjecthkpSingleShapeContainer(void *p)
{
    static_cast<hkpSingleShapeContainer *>(p)->~hkpSingleShapeContainer();
}
