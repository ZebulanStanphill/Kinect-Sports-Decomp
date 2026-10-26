// cleanupLoadedObjecthkxTextureFile: the cleanup function in hkxTextureFile's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxTextureFile {
public:
    virtual ~hkxTextureFile();
};

void HK_CALL cleanupLoadedObjecthkxTextureFile(void *p)
{
    static_cast<hkxTextureFile *>(p)->~hkxTextureFile();
}
