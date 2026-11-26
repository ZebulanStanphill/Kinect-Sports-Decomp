// hkxMesh::hkxMesh(hkFinishLoadedObjectFlag), the finish constructor, out of line in hkxMesh.cpp. It keeps its fn_ name because a Matching C unit (the finish function) calls it; the explicit constructor call (an MSVC extension) expands the inline definition without placement new's null check.
#include "havok/hkSceneData.h"

extern "C" hkxMesh *fn_82E05D68(hkxMesh *self, hkFinishLoadedObjectFlag f)
{
    self->hkxMesh::hkxMesh(f);
    return self;
}
