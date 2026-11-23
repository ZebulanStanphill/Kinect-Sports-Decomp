#include "havok/hkBase.h"

typedef hkCachedHashMap<hkStringMapOperations> StringHashMap;

struct Entry_82E1A540 {
    int key;
    int value;
};


template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Entries_82E1A540 : public hkArrayBase<Entry_82E1A540> {
public:
    HK_FORCE_INLINE void pushBack(const Entry_82E1A540 &e)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) hkArrayUtil::_reserveMore(alloc, this, sizeof(Entry_82E1A540));
        constructWithCopy(m_data + m_size, 1, e);
        m_size++;
    }
};

struct Obj_82E1A540 {
    int pad00[9];
    Entries_82E1A540 entries;
    StringHashMap *map;
};

extern "C" void fn_82E1A540(Obj_82E1A540 *self, int key, int name)
{
    if (self->map == 0) {
        void *mem = hkMemoryRouter::getInstance().heap().blockAlloc(0x10);
        if (mem != 0) {
            new (mem) StringHashMap;
        } else {
            mem = 0;
        }
        self->map = static_cast<StringHashMap *>(mem);
    }
    StringHashMap *map = self->map;
    StringHashMap::Iterator it = map->findKey(name);
    int value;
    hkBool valid = map->isValid(it);
    if (!valid) {
        value = reinterpret_cast<int>(hkString::strDup(reinterpret_cast<const char *>(name), hkMemoryRouter::getInstance().heap()));
        map->insert(value, 0);
    } else {
        value = map->getKey(it);
        map->setValue(it, 0);
    }
    Entry_82E1A540 e;
    e.key = key;
    e.value = value;
    self->entries.pushBack(e);
}
