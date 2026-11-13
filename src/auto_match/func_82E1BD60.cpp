// Free-list allocator over a Havok hkArray of 8-byte slots: reuse the first free slot
// (its second word links the free list), else grow the array by one. Havok code: /O2.
#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

struct Slot_82E1BD60 {
    int value;
    int nextFree;
};

class Slots_82E1BD60 : public hkArrayBase<Slot_82E1BD60> {
public:
    HK_FORCE_INLINE void expandOne()
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(Slot_82E1BD60));
        m_size++;
    }
};

class FreeList_82E1BD60 {
public:
    Slots_82E1BD60 m_slots;
    char pad[0xc];
    int m_firstFree;   // +0x18
};

extern "C" int fn_82E1BD60(FreeList_82E1BD60 *self)
{
    int index = self->m_firstFree;
    if (index != -1) {
        self->m_firstFree = self->m_slots[index].nextFree;
        return index;
    }
    index = self->m_slots.getSize();
    self->m_slots.expandOne();
    return index;
}
