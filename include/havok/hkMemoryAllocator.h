// hkMemoryAllocator (Common/Base/Memory/Allocator/hkMemoryAllocator.h): the
// abstract allocator interface behind hkMemoryRouter's heap(), temp() and so
// on. Its vtable ??_7hkMemoryAllocator@@6B@ has 13 slots; only the ones the
// game's inlined allocation code calls are declared, at their real offsets.
//   +0x00 ~hkMemoryAllocator (fn_82598868)
//   +0x04 blockAlloc(int numBytes)             pure
//   +0x08 blockFree(void *p, int numBytes)     pure
//   +0x0C bufAlloc(int &reqNumInOut, int elemSize)   fn_82CE6988: blockAlloc(n * elemSize)
//   +0x10 bufFree(void *p, int num, int elemSize)    fn_82CE69A0: blockFree(p, num * elemSize)
//   +0x14 bufRealloc(...)                             fn_82CE6A70
// The parameter lists of slots 3-5 are read from the default implementations;
// their names follow Havok 2010 but are not confirmed.
#ifndef HAVOK_HKMEMORYALLOCATOR_H
#define HAVOK_HKMEMORYALLOCATOR_H
#include "havok/hkBaseTypes.h"

class hkMemoryAllocator {
public:
    virtual ~hkMemoryAllocator();
    virtual void *blockAlloc(int numBytes) = 0;
    virtual void blockFree(void *p, int numBytes) = 0;
    virtual void *bufAlloc(int &reqNumInOut, int elemSize);
    virtual void bufFree(void *p, int num, int elemSize);
};

#endif
