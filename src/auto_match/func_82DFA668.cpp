// Havok: sets the AABB count, clears the second counter and appends that many zeroed AABBs
// (hkArray<hkAabb>::pushBack through the heap allocator).
#include "havok/hkBase.h"
#include "havok/hkAabb.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

template <typename T, typename Allocator = hkContainerHeapAllocator>
class Array_82DFA668 : public hkArrayBase<T> {
public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        new (this->m_data + this->m_size) T(e);
        this->m_size++;
    }
    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            hkArrayUtil::_reserveMore(alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }
    HK_FORCE_INLINE void pushBack(const T &e) { _pushBack(Allocator::get(this), e); }
};

struct Self_82DFA668 {
    char pad0[8];
    int m_count;                            // 0x08
    int m_numAabbs;                         // 0x0c
    Array_82DFA668<hkAabb> m_aabbs;         // 0x10
};

extern "C" void fn_82DFA668(Self_82DFA668 *self, int numAabbs)
{
    self->m_numAabbs = numAabbs;
    self->m_count = 0;
    for (int i = 0; i < self->m_numAabbs; i++) {
        hkAabb aabb;
        aabb.m_min.setZero4();
        aabb.m_max.setZero4();
        self->m_aabbs.pushBack(aabb);
    }
}
