// hkMemoryAllocator::~hkMemoryAllocator (Common/Base/Memory/Allocator/
// hkMemoryAllocator.cpp). It keeps its fn_ name because a Matching C unit (the
// deleting destructor fn_82598868) calls it, so the destructor is defined
// inline here and expanded into an extern "C" definition.
#include "havok/hkBase.h"

inline hkMemoryAllocator::~hkMemoryAllocator() {}

extern "C" void fn_82CE6978(hkMemoryAllocator *self)
{
    self->hkMemoryAllocator::~hkMemoryAllocator();
}
