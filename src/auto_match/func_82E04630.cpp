// hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(hkFinishLoadedObjectFlag), the finish constructor, out of line in hkAlignSceneToNodeOptions.cpp. It keeps its fn_ name because a Matching C unit (the finish function) calls it; the explicit constructor call (an MSVC extension) expands the inline definition without placement new's null check.
#include "havok/hkSceneData.h"

extern "C" hkAlignSceneToNodeOptions *fn_82E04630(hkAlignSceneToNodeOptions *self, hkFinishLoadedObjectFlag f)
{
    self->hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(f);
    return self;
}
