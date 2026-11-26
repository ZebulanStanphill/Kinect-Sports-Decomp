// hkLargeBlockAllocator::~hkLargeBlockAllocator (Common/Base/Memory/Allocator/
// LargeBlock/hkLargeBlockAllocator.cpp): returns every page to the block
// server. It keeps its fn_ name because a Matching C unit (the deleting
// destructor fn_82D03F30) calls it: the header's destructor is inline (forced)
// and expanded into an extern "C" definition.
#include "havok/hkLargeBlockAllocator.h"

extern "C" void fn_82D028F8(hkLargeBlockAllocator *self)
{
    self->hkLargeBlockAllocator::~hkLargeBlockAllocator();
}
