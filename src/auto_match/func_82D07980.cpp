#include "havok/hkString.h"
#include "havok/hkArrayUtil.h"

typedef struct IndexArray_82D07980 {
    int *data;                     /* 0x00 */
    int size;                      /* 0x04 */
    unsigned int capacityAndFlags; /* 0x08 */
} IndexArray_82D07980;

typedef struct Memory_82D07980 {
    char pad0[0x10];
    int heap; /* 0x10 */
} Memory_82D07980;

extern "C" Memory_82D07980 *fn_82CE5410(void);

static __forceinline int *ExpandBy(IndexArray_82D07980 *array, int count)
{
    int heap = fn_82CE5410()->heap;
    int size = array->size;
    int newSize = size + count;
    int capacity = array->capacityAndFlags & 0x3fffffff;
    int *result;

    if (capacity < newSize) {
        int doubled = capacity * 2;
        hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(heap), array, newSize < doubled ? doubled : newSize, 4);
    }
    result = array->data + size;
    array->size += count;
    return result;
}

extern "C" void fn_82D07980(int type, const int *source, int count, int offset, IndexArray_82D07980 *indices)
{
    int *out;
    int i;

    switch (type) {
    case 3:
        out = ExpandBy(indices, count);
        if (offset == 0) {
            hkString::memCpy(out, source, count * 4);
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
