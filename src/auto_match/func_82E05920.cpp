// hkxMaterialShaderSet::hkxMaterialShaderSet(hkFinishLoadedObjectFlag), the finish constructor, out of line in hkxMaterialShaderSet.cpp. It keeps its fn_ name because a Matching C unit (the finish function) calls it; the explicit constructor call (an MSVC extension) expands the inline definition without placement new's null check.
#include "havok/hkSceneData.h"

extern "C" hkxMaterialShaderSet *fn_82E05920(hkxMaterialShaderSet *self, hkFinishLoadedObjectFlag f)
{
    self->hkxMaterialShaderSet::hkxMaterialShaderSet(f);
    return self;
}
