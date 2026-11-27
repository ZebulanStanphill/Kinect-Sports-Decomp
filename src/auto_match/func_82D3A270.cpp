// cleanupLoadedObjecthkpExtendedMeshShapeShapesSubpart: the cleanup function in hkpExtendedMeshShape::ShapesSubpart's
// hkTypeInfo (HK_REFLECTION_DEFINE_SCOPED_SIMPLE, static in Havok), /O1: runs the destructor (82D43000).
#include "havok/hkpExtendedMeshShape.h"

extern "C" void fn_82D3A270(void *p)
{
    static_cast<hkpExtendedMeshShape::ShapesSubpart *>(p)->~ShapesSubpart();
}
