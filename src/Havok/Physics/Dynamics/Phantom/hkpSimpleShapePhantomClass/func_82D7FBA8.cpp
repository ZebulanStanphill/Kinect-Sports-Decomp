// cleanupLoadedObjecthkpSimpleShapePhantom: the cleanup function in hkpSimpleShapePhantom's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpSimpleShapePhantom.h"

void HK_CALL cleanupLoadedObjecthkpSimpleShapePhantom(void *p)
{
    static_cast<hkpSimpleShapePhantom *>(p)->~hkpSimpleShapePhantom();
}
