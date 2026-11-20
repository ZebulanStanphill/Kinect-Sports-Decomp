#include "havok/hkArrayUtil.h"

typedef struct Array_82E06EB0 {
    void *data;            /* 0x00 */
    int size;              /* 0x04 */
    unsigned int capacity; /* 0x08 */
} Array_82E06EB0;

typedef struct Buffers_82E06EB0 {
    Array_82E06EB0 quads;  /* 0x00 */
    Array_82E06EB0 words;  /* 0x0c */
    Array_82E06EB0 longs;  /* 0x18 */
    Array_82E06EB0 halves; /* 0x24 */
    Array_82E06EB0 bytes;  /* 0x30 */
    int count;             /* 0x3c */
    unsigned int quadBits; /* 0x40 */
    unsigned int wordBits; /* 0x44 */
    unsigned int longBits; /* 0x48 */
    unsigned int halfBits; /* 0x4c */
    int bytesPerItem;      /* 0x50 */
} Buffers_82E06EB0;

typedef struct Heap_82E06EB0 {
    char pad[0x10];
    int heap; /* 0x10 */
} Heap_82E06EB0;

extern "C" Heap_82E06EB0 *fn_82CE5410(void);

static __forceinline void SetSize(Array_82E06EB0 *array, int size, int elementSize)
{
    int heap = fn_82CE5410()->heap;
    int doubled;

    if ((int)(array->capacity & 0x3fffffff) < size) {
        doubled = (array->capacity & 0x3fffffff) << 1;
        hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(heap), array, size < doubled ? doubled : size, elementSize);
    }
    array->size = size;
}

extern "C" void fn_82E06EB0(Buffers_82E06EB0 *self, int count)
{
    self->count = count;
    SetSize(&self->bytes, self->bytesPerItem * count, 1);
    SetSize(&self->halves, (self->halfBits * count) >> 1, 2);
    SetSize(&self->longs, (self->longBits * count) >> 2, 4);
    SetSize(&self->words, (self->wordBits * count) >> 2, 4);
    SetSize(&self->quads, (self->quadBits * count) >> 4, 0x10);
}
