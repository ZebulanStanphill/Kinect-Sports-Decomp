#include "havok/hkArrayUtil.h"

typedef char *va_list;
extern "C" void __cdecl __va_start(va_list *args, ...);

typedef struct Array_82CED738 {
    char *data;        /* 0x00 */
    int size;          /* 0x04 */
    int capacity;      /* 0x08 */
    char storage[256]; /* 0x0c */
} Array_82CED738;
typedef struct Allocator_82CED738 Allocator_82CED738;

typedef struct Vtable_82CED738 {
    void *pad[4];                                                            /* 0x00 */
    void (*free)(Allocator_82CED738 *self, void *data, int count, int size); /* 0x10 */
} Vtable_82CED738;

struct Allocator_82CED738 {
    Vtable_82CED738 *vtable; /* 0x00 */
};

typedef struct Router_82CED738 {
    char pad[0x10];           /* 0x00 */
    Allocator_82CED738 *heap; /* 0x10 */
} Router_82CED738;

extern "C" Router_82CED738 *fn_82CE5410(void);
extern "C" int fn_82CFBB58(char *output, int capacity, const char *format, va_list args);
extern "C" void fn_82CED628(void *self, char *text);

static __forceinline void reserve_82CED738(Array_82CED738 *array, int required)
{
    Allocator_82CED738 *allocator = fn_82CE5410()->heap;
    int capacity = array->capacity & 0x3fffffff;
    if (capacity < required) {
        int growth = capacity * 2;
        hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(allocator), array, required < growth ? growth : required, 1);
    }
}

extern "C" void fn_82CED738(void *self, const char *format, ...)
{
    va_list args;
    Array_82CED738 array;
    int capacity;
    int length;
    Allocator_82CED738 *allocator;
    __va_start(&args, format);
    array.size = 0;
    array.data = array.storage;
    array.capacity = 0x800000ff;
    for (;;) {
        capacity = array.capacity & 0x3fffffff;
        length = fn_82CFBB58(array.data, capacity, format, args);
        if (length >= 0) {
            if (length < capacity) {
                break;
            }
            reserve_82CED738(&array, length);
        } else {
            reserve_82CED738(&array, (array.capacity & 0x3fffffff) * 2);
        }
    }
    fn_82CED628(self, array.data);
    fn_82CED628(self, array.data);
    allocator = fn_82CE5410()->heap;
    array.size = 0;
    if ((array.capacity & (int)0x80000000) == 0) {
        allocator->vtable->free(allocator, array.data, array.capacity & 0x3fffffff, 1);
    }
}
