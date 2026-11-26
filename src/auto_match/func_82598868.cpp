// A scalar deleting destructor shared by ICF: slot 0 of the vtables of hkMemoryAllocator,
// hkLeakDetectAllocator and the game allocator lbl_821C7AEC. The classes have a placement allocator
// and implicit destructors, so it runs ~hkMemoryAllocator, ignores the flags and returns this. It keeps
// its fn_ name because it stands for several classes.
#include "havok/hkBase.h"

extern "C" hkMemoryAllocator *fn_82598868(hkMemoryAllocator *self)
{
    self->hkMemoryAllocator::~hkMemoryAllocator();
    return self;
}
