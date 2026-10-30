#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore
extern "C" void fn_82CE3F80(void);   // lock
extern "C" void fn_82CE3FE8(void);   // unlock

template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

template <typename T>
class Arr : public hkArrayBase<T> {
public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        constructWithCopy(this->m_data + this->m_size, 1, e);
        this->m_size++;
    }
    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            fn_82CE63B0(&alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }
    HK_FORCE_INLINE void pushBack(const T &e)
    {
        _pushBack(hkContainerHeapAllocator::get(this), e);
    }
};

struct Elem_82DA6368 {
    hkReferencedObject *a;
    hkReferencedObject *b;
    int c;
    int d;
};

struct World_82DA6368 {
    char pad[0x90];
    int counter;
};

struct Owner_82DA6368 {
    char pad[0xc];
    World_82DA6368 *world;
    char pad2[0xc];
    Arr<Elem_82DA6368> list;
};

extern "C" void fn_82DA6368(Owner_82DA6368 *self, hkReferencedObject *a, hkReferencedObject *b, int c, int d)
{
    fn_82CE3F80();
    self->world->counter++;
    Arr<Elem_82DA6368> *l = &self->list;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (l->m_size == l->getCapacity()) {
        fn_82CE63B0(&alloc, l, sizeof(Elem_82DA6368));
    }
    Elem_82DA6368 *p = l->m_data + l->m_size;
    l->m_size++;
    p->a = a; p->b = b; p->c = c; p->d = d;
    a->addReference();
    b->addReference();
    fn_82CE3FE8();
}
