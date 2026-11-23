#include "havok/hkString.h"

#include "havok/hkArrayUtil.h"

typedef char *va_list;
extern "C" void __cdecl __va_start(va_list *args, ...);

typedef struct String_82D04B90 {
    char *data;           /* 0x0 */
    int size;             /* 0x4 */
    int capacityAndFlags; /* 0x8 */
} String_82D04B90;

typedef struct Router_82D04B90 {
    char pad[0xc]; /* 0x0 */
    void *heap;    /* 0xc */
} Router_82D04B90;

extern "C" Router_82D04B90 *fn_82CE5410(void);
extern "C" void fn_82CE7E00(String_82D04B90 *string, int length);

static __forceinline void setLength_82D04B90(String_82D04B90 *self, int length)
{
    int required = length + 1;
    void *allocator = fn_82CE5410()->heap;
    int capacity = self->capacityAndFlags & 0x3fffffff;
    if (capacity < required) {
        int growth = capacity * 2;
        hkArrayUtil::_reserve(*reinterpret_cast<hkMemoryAllocator *>(allocator), self, required < growth ? growth : required, 1);
    }
    self->size = required;
    self->data[length] = 0;
}

extern "C" void fn_82D04B90(String_82D04B90 *self, const char *format, ...)
{
    va_list args;

    __va_start(&args, format);
    for (;;) {
        int capacity = self->capacityAndFlags & 0x3fffffff;
        int length = hkString::vsnprintf(self->data, capacity, format, args);
        if (length >= 0 && length < capacity) {
            fn_82CE7E00(self, length);
            return;
        } else if (length < 0) {
            int growth = capacity * 2;
            setLength_82D04B90(self, growth > 0xff ? growth : 0xff);
        } else {
            setLength_82D04B90(self, length);
        }
    }
}
