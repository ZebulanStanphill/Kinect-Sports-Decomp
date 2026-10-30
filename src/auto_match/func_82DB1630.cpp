// Appends an item to a Havok hkArray<void *> member (+0x44) when the owner's flag (+0x24) is set, after
// calling fn_82D93430 on the item's base subobject (offset in its byte at +0x10). Havok code: /O2.
#include "havok/hkBase.h"

extern "C" void fn_82D93430(void *p, int n);
extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

// hkArrayBase<T>::_pushBack: reserve through hkArrayUtil::_reserveMore (fn_82CE63B0), then construct in place.
class Items_82DB1630 : public hkArrayBase<void *> {
public:
    HK_FORCE_INLINE void push(void *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(void *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

class ArrayOwner_82DB1630 {
public:
    char pad0[0x24];
    hkUint8 m_flag;
    char pad1[0x1f];
    Items_82DB1630 m_items;   // +0x44
};

struct Item_82DB1630 {
    char pad[0x10];
    char m_off;
};

extern "C" void fn_82DB1630(ArrayOwner_82DB1630 *self, Item_82DB1630 *item)
{
    if (self->m_flag != 0) {
        fn_82D93430((char *)item + item->m_off, 0xffff);
        void *v = item;
        self->m_items.push(v);
    }
}
