#include "havok/hkBase.h"


template <typename T> static HK_FORCE_INLINE void FillValues(T *values, int count, const T &value)
{
    for (int i = 0; i < count; i++) {
        values[i] = value;
    }
}

class Array_82E0B220 : public hkArrayBase<int>
{
  public:
    HK_FORCE_INLINE void reserve(hkMemoryAllocator &heap, int count)
    {
        const int capacity = getCapacity();
        if (capacity < count) {
            int doubled = capacity * 2;
            int next = count < doubled ? doubled : count;
            hkArrayUtil::_reserve(heap, this, next, sizeof(int));
        }
    }

    HK_FORCE_INLINE void setSize(int count, const int &value)
    {
        hkMemoryAllocator &heap = hkContainerHeapAllocator::get(this);
        reserve(heap, count);
        FillValues(m_data + m_size, count - m_size, value);
        m_size = count;
    }
};

typedef struct Header_82E0B220 {
    char pad0[0xc]; /* +0x0 */
    int version;    /* +0xc */
    char pad10[4];  /* +0x10 */
    int count;      /* +0x14 */
} Header_82E0B220;
typedef struct Reader_82E0B220 Reader_82E0B220;

typedef struct ReaderVtable_82E0B220 {
    void *slots[4];                                          /* +0x0 */
    int (*read)(Reader_82E0B220 *self, void *out, int size); /* +0x10 */
} ReaderVtable_82E0B220;

struct Reader_82E0B220 {
    ReaderVtable_82E0B220 *vtable; /* +0x0 */
};

typedef struct Object_82E0B220 {
    char pad0[0x18];                        /* +0x0 */
    void *resource;                         /* +0x18 */
    Header_82E0B220 *header;                /* +0x1c */
    char *data;                             /* +0x20 */
    Array_82E0B220 array;                   /* +0x24 */
    char pad30[0x7c - 0x30];                /* +0x30 */
    hkRefPtr<hkReferencedObject> reference; /* +0x7c */
} Object_82E0B220;

extern "C" void fn_82E162A8(void *resource, void *reference);
extern "C" void fn_82E0DF70(void *resource, void *data);

struct Entry_82E0B220 {
    int words[12]; /* +0x0 */
};

extern "C" int fn_82E0B220(Object_82E0B220 *self, Reader_82E0B220 *reader, char *data)
{
    int count; /* +0x14 */
    int size;
    int i;
    Array_82E0B220 *array;
    Entry_82E0B220 *item;
    int value;

    self->reference.~hkRefPtr<hkReferencedObject>();
    fn_82E162A8(self->resource, 0);
    if (data == 0) {
        count = self->header->count;
        data = (char *)fn_82CE52E0(fn_82CE5410()->m_heap, count * 48);
        fn_82E0DF70(self->resource, data);
    }
    size = self->header->count * 48;
    if (reader->vtable->read(reader, data, size) == size) {
        self->data = data;
        array = &self->array;
        count = self->header->count;
        array->setSize(count, 0);
        if (self->header->version < 4) {
            count = self->header->count;
            item = (Entry_82E0B220 *)self->data;
            for (i = 0; i < count; i++) {
                value = item->words[10];
                item->words[11] = value;
                item->words[9] = value;
                item++;
            }
        }
        return 0;
    }
    return 1;
}
