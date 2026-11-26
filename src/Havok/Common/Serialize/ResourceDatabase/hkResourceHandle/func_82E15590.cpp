// hkMemoryResourceHandle::hkMemoryResourceHandle(hkFinishLoadedObjectFlag), the finish constructor, out of line in hkMemoryResourceHandle.cpp. It keeps its fn_ name because a Matching C unit (the finish function) calls it; the explicit constructor call (an MSVC extension) expands the inline definition without placement new's null check.
#include "havok/hkMemoryResourceContainer.h"

extern "C" hkMemoryResourceHandle *fn_82E15590(hkMemoryResourceHandle *self, hkFinishLoadedObjectFlag f)
{
    self->hkMemoryResourceHandle::hkMemoryResourceHandle(f);
    return self;
}
