// hkxEnvironment::hkxEnvironment(hkFinishLoadedObjectFlag), the finish constructor, out of line in hkxEnvironment.cpp. It keeps its fn_ name because a Matching C unit (the finish function) calls it; the explicit constructor call (an MSVC extension) expands the inline definition without placement new's null check.
#include "havok/hkSceneData.h"

extern "C" hkxEnvironment *fn_82E04F90(hkxEnvironment *self, hkFinishLoadedObjectFlag f)
{
    self->hkxEnvironment::hkxEnvironment(f);
    return self;
}
