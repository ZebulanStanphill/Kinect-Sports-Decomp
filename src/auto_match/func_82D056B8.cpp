#include "havok/hkString.h"

#include "havok/hkArrayUtil.h"

typedef char *va_list;
extern "C" void __cdecl __va_start(va_list *args, ...);

typedef struct String_82D056B8 {
    char *data;           /* 0x0 */
    int size;             /* 0x4 */
    int capacityAndFlags; /* 0x8 */
} String_82D056B8;

typedef struct InlineString_82D056B8 {
    String_82D056B8 string; /* 0x0 */
    char storage[0x20];     /* 0xc */
} InlineString_82D056B8;

typedef struct Router_82D056B8 {
    char pad[0xc]; /* 0x0 */
    void *heap;    /* 0xc */
} Router_82D056B8;

extern "C" Router_82D056B8 *fn_82CE5410(void);
extern "C" void fn_82CE7E00(String_82D056B8 *string, int length);
extern "C" void fn_82CE7EE0(InlineString_82D056B8 *string);
extern "C" void fn_82CE7E68(String_82D056B8 *string);
extern "C" void fn_82D04F70(void *self, const char *text, int length);

static __forceinline void setLength_82D056B8(String_82D056B8 *self, int length)
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

extern "C" void fn_82D056B8(void *self, const char *format, ...)
{
    va_list args;
    InlineString_82D056B8 buffer;
    int capacity;
    int length;

    fn_82CE7EE0(&buffer);
    __va_start(&args, format);
    for (;;) {
        capacity = buffer.string.capacityAndFlags & 0x3fffffff;
        length = hkString::vsnprintf(buffer.string.data, capacity, format, args);
        if (length >= 0) {
            if (length < capacity) {
                break;
            }
            setLength_82D056B8(&buffer.string, length);
        } else {
            int growth = capacity * 2;
            setLength_82D056B8(&buffer.string, growth > 0xff ? growth : 0xff);
        }
    }
    fn_82CE7E00(&buffer.string, length);
    fn_82D04F70(self, buffer.string.data, -1);
    fn_82CE7E68(&buffer.string);
}
