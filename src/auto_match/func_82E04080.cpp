// hkxAnimatedFloat::~hkxAnimatedFloat, the implicit destructor (no class vtable store on entry), emitted out of line because the deleting destructor calls it. Identical code folding shares it with the destructors of hkxEdgeSelectionChannel, hkxTriangleSelectionChannel, hkxVertexSelectionChannel, hkxVertexFloatDataChannel and hkxVertexIntDataChannel (one hkArray of 4-byte elements at +0x8). The finish constructor below only makes the compiler emit the vtable.
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

void emitVtable_82E04080(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxAnimatedFloat(f); }
