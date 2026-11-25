// hkxTextureFile::hkxTextureFile(hkFinishLoadedObjectFlag), the finish constructor, out of line in hkxTextureFile.cpp. It keeps its fn_ name because a Matching C unit (the finish function) calls it; the explicit constructor call (an MSVC extension) expands the inline definition without placement new's null check.
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

extern "C" hkxTextureFile *fn_82E03D80(hkxTextureFile *self, hkFinishLoadedObjectFlag f)
{
    self->hkxTextureFile::hkxTextureFile(f);
    return self;
}
