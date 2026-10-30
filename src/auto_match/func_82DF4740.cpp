#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore
extern "C" void fn_82D8A058(int, void *);
extern "C" void fn_82D81078(int, int, int);


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
struct Item_82DF4740 : public hkReferencedObject {
    char pad[0x4];
    unsigned char flags;   // +0xc
    char pad2[3];
    int ref;   // +0x10
};

struct Owner_82DF4740 {
    char pad[0x2c];
    Arr<Item_82DF4740 *> list;
    int field38;
};

extern "C" void fn_82DF4740(Owner_82DF4740 *self, Item_82DF4740 *item)
{
    item->addReference();
    self->list.pushBack(item);
    int v = self->field38;
    if (item->flags & 4) {
        fn_82D8A058(item->ref, (char *)item + 8);
    }
    fn_82D81078(v, item->ref, 1);
}
