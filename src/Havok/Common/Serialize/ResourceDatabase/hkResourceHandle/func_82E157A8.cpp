// hkMemoryResourceContainer::hkMemoryResourceContainer(hkFinishLoadedObjectFlag). When finishing, each child
// gets this container as its parent. The function keeps its fn_ name, so it is the header's inline finish
// constructor run by an explicit constructor call.
#include "havok/hkMemoryResourceContainer.h"

extern "C" hkMemoryResourceContainer *fn_82E157A8(hkMemoryResourceContainer *self, hkFinishLoadedObjectFlag flag)
{
    self->hkMemoryResourceContainer::hkMemoryResourceContainer(flag);
    return self;
}
