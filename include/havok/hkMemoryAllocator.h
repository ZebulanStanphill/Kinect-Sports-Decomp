// hkMemoryAllocator (Common/Base/Memory/Allocator/hkMemoryAllocator.h): the
// abstract allocator interface behind hkMemoryRouter's heap(), temp() and so
// on. Its vtable ??_7hkMemoryAllocator@@6B@ has 13 slots, all declared at their
// real offsets so that a subclass's own virtuals land after them (hkThreadMemory's
// releaseCachedMemory at +0x34); slots 6-12 are not named yet.
//   +0x00 ~hkMemoryAllocator (fn_82598868)
//   +0x04 blockAlloc(int numBytes)             pure
//   +0x08 blockFree(void *p, int numBytes)     pure
//   +0x0C bufAlloc(int &reqNumInOut, int elemSize)   fn_82CE6988: blockAlloc(n * elemSize)
//   +0x10 bufFree(void *p, int num, int elemSize)    fn_82CE69A0: blockFree(p, num * elemSize)
//   +0x14 bufRealloc(void *p, int oldNum, int &reqNumInOut, int elemSize)   fn_82CE6A70
//   +0x18 .. +0x24 fn_82CE69B8, fn_82CE6A08, fn_82CE6A58, fn_82CE6A68
//   +0x28, +0x2C   pure in the game (_purecall); declared non-pure here so that
//                  the subclasses that units construct stay concrete
//   +0x30          fn_82BA02A8 (the shared empty function)
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
    virtual void *bufRealloc(void *p, int oldNum, int &reqNumInOut, int elemSize);
    virtual void slot18();   // +0x18
    virtual void slot1C();   // +0x1C
    virtual void slot20();   // +0x20
    virtual void slot24();   // +0x24
    virtual void slot28();   // +0x28 (pure)
    virtual void slot2C();   // +0x2C (pure)
    virtual void slot30();   // +0x30
};

#endif
