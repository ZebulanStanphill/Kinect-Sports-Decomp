// hkLargeBlockAllocator::hkLargeBlockAllocator(hkMemoryBlockServer *) (Common/Base/Memory/Allocator/LargeBlock/
// hkLargeBlockAllocator.cpp). It keeps its fn_ name because hkFreeListAllocator's constructor (fn_82CF9730) calls it,
// so the header's inline constructor is expanded into an extern "C" definition.
#include "havok/hkLargeBlockAllocator.h"

extern "C" hkLargeBlockAllocator *fn_82D03DD8(hkLargeBlockAllocator *self, hkMemoryBlockServer *server)
{
    self->hkLargeBlockAllocator::hkLargeBlockAllocator(server);
    return self;
}
