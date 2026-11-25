// hkxVertexBuffer::hkxVertexBuffer(hkFinishLoadedObjectFlag), the finish constructor, out of line in hkxVertexBuffer.cpp. It keeps its fn_ name because a Matching C unit (the finish function) calls it; the explicit constructor call (an MSVC extension) expands the inline definition without placement new's null check.
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

extern "C" hkxVertexBuffer *fn_82E07040(hkxVertexBuffer *self, hkFinishLoadedObjectFlag f)
{
    self->hkxVertexBuffer::hkxVertexBuffer(f);
    return self;
}
