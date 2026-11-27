// cleanupLoadedObjecthkpCompressedMeshShapeConvexPiece: the cleanup function in hkpCompressedMeshShape::ConvexPiece's
// hkTypeInfo (HK_REFLECTION_DEFINE_SCOPED_SIMPLE, static in Havok), /O1: runs the destructor (82D39710).
#include "havok/hkpCompressedMeshShape.h"

extern "C" void fn_82D395D8(void *p)
{
    static_cast<hkpCompressedMeshShape::ConvexPiece *>(p)->~ConvexPiece();
}
