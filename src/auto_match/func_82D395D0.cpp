// cleanupLoadedObjecthkpCompressedMeshShapeChunk: the cleanup function in hkpCompressedMeshShape::Chunk's
// hkTypeInfo (HK_REFLECTION_DEFINE_SCOPED_SIMPLE, static in Havok), /O1: runs the destructor (82D395E0).
#include "havok/hkpCompressedMeshShape.h"

extern "C" void fn_82D395D0(void *p)
{
    static_cast<hkpCompressedMeshShape::Chunk *>(p)->~Chunk();
}
