#include "havok/hkBase.h"

struct Flag_82E1A540 {
};

struct Entry_82E1A540 {
    int key;
    int value;
};

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *arr, int elemSize);
extern "C" int fn_82CFBEB8(int name, hkMemoryAllocator *alloc);
extern "C" int fn_82D00000(void *map, int it);
extern "C" void fn_82D00040(void *map, int it, int v);
extern "C" void fn_82D000A0(void *map, int key, int v);
extern "C" int fn_82D001D8(void *map, int key);
extern "C" hkBool fn_82D002F0(void *map, int it);
extern "C" void fn_82D00388(void *map, Flag_82E1A540 flag);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

static HK_FORCE_INLINE int strDup(int name, hkMemoryAllocator &alloc) { return fn_82CFBEB8(name, &alloc); }

class Entries_82E1A540 : public hkArrayBase<Entry_82E1A540> {
public:
    HK_FORCE_INLINE void pushBack(const Entry_82E1A540 &e)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(Entry_82E1A540));
        constructWithCopy(m_data + m_size, 1, e);
        m_size++;
    }
};

struct Obj_82E1A540 {
    int pad00[9];
    Entries_82E1A540 entries;
    void *map;
};

extern "C" void fn_82E1A540(Obj_82E1A540 *self, int key, int name)
{
    if (self->map == 0) {
        void *mem = hkMemoryRouter::getInstance().heap().blockAlloc(0x10);
        if (mem != 0) {
            fn_82D00388(mem, Flag_82E1A540());
        } else {
            mem = 0;
        }
        self->map = mem;
    }
    void *map = self->map;
    int it = fn_82D001D8(map, name);
    int value;
    hkBool valid = fn_82D002F0(map, it);
    if (!valid) {
        value = strDup(name, hkMemoryRouter::getInstance().heap());
        fn_82D000A0(map, value, 0);
    } else {
        value = fn_82D00000(map, it);
        fn_82D00040(map, it, 0);
    }
    Entry_82E1A540 e;
    e.key = key;
    e.value = value;
    self->entries.pushBack(e);
}
