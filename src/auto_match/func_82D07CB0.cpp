#include "havok/hkArrayUtil.h"

typedef struct IndexArray_82D07CB0 {
    unsigned short *data;          /* 0x00 */
    int size;                      /* 0x04 */
    unsigned int capacityAndFlags; /* 0x08 */
} IndexArray_82D07CB0;

typedef struct Memory_82D07CB0 {
    char pad0[0x10];
    int heap; /* 0x10 */
} Memory_82D07CB0;

extern "C" Memory_82D07CB0 *fn_82CE5410(void);
extern "C" void fn_82CFC050(void *dst, const void *src, int size);

static __forceinline unsigned short *ExpandBy(IndexArray_82D07CB0 *array, int count)
{
    Memory_82D07CB0 *memory = fn_82CE5410();
    int heap = memory->heap;
    int size = array->size;
    int newSize = size + count;
    int capacity = array->capacityAndFlags & 0x3fffffff;
    unsigned short *result;

    if (capacity < newSize) {
        int doubled = capacity * 2;
        hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(heap), array, newSize < doubled ? doubled : newSize, 2);
    }
    result = array->data + size;
    array->size += count;
    return result;
}

extern "C" void fn_82D07CB0(int type, const unsigned short *source, int count, int offset, IndexArray_82D07CB0 *indices)
{
    unsigned short *out;
    int i;

    switch (type) {
    case 3:
        out = ExpandBy(indices, count);
        if (offset == 0) {
            fn_82CFC050(out, source, count * 2);
        } else {
            for (i = 0; i < count; i++) {
                out[i] = source[i] + offset;
            }
        }
        break;
    case 4:
        out = ExpandBy(indices, (count - 2) * 3);
        for (i = 2; i < count; i++) {
            *out++ = source[i - 2] + offset;
            if ((i & 1) == 0) {
                *out++ = source[i - 1] + offset;
                *out++ = source[i] + offset;
            } else {
                *out++ = source[i] + offset;
                *out++ = source[i - 1] + offset;
            }
        }
        break;
    }
}
