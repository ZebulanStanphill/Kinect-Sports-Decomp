// cleanupLoadedObjecthkxMeshSection: the cleanup function in hkxMeshSection's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxMeshSection {
public:
    virtual ~hkxMeshSection();
};

void HK_CALL cleanupLoadedObjecthkxMeshSection(void *p)
{
    static_cast<hkxMeshSection *>(p)->~hkxMeshSection();
}
