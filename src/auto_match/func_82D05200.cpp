#include "havok/hkString.h"

typedef struct Arr_82D05200 {
    void *data;
    int size;
    unsigned int cap;
} Arr_82D05200;

extern "C" void fn_82CE7E00(Arr_82D05200 *a, int size);

extern "C" Arr_82D05200 *fn_82D05200(Arr_82D05200 *a, const unsigned int *tagged)
{
    a->data = a + 1;
    a->size = 0;
    a->cap = 0x80000020;
    const char *src = reinterpret_cast<const char *>(*tagged & ~1u);
    if (src != 0) {
        int len = hkString::strLen(src);
        fn_82CE7E00(a, len);
        hkString::memCpy(a->data, src, len);
    } else {
        fn_82CE7E00(a, 0);
    }
    return a;
}
