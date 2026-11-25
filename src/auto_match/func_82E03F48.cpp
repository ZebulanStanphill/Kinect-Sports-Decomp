// hkxTextureInplace::~hkxTextureInplace, the implicit destructor (no class vtable store on entry), emitted out of line because the deleting destructor calls it. The finish constructor below only makes the compiler emit the vtable.
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

void emitVtable_82E03F48(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxTextureInplace(f); }
