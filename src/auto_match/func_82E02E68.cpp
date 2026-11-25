// hkxMaterialShader::hkxMaterialShader(hkFinishLoadedObjectFlag), the finish constructor, out of line in hkxMaterialShader.cpp. It keeps its fn_ name because a Matching C unit (the finish function) calls it; the explicit constructor call (an MSVC extension) expands the inline definition without placement new's null check.
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

extern "C" hkxMaterialShader *fn_82E02E68(hkxMaterialShader *self, hkFinishLoadedObjectFlag f)
{
    self->hkxMaterialShader::hkxMaterialShader(f);
    return self;
}
