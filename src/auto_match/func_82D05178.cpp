#include "havok/hkString.h"

typedef struct {
    void *data;
    int size;
    unsigned int cap;
} Arr_82D05178;

extern "C" void fn_82CE7E00(Arr_82D05178 *a, int size);

extern "C" Arr_82D05178 *fn_82D05178(Arr_82D05178 *a, const char *src)
{
    a->data = a + 1;
    a->size = 0;
    a->cap = 0x80000020;
    if (src != 0) {
        int len = hkString::strLen(src);
        fn_82CE7E00(a, len);
        hkString::memCpy(a->data, src, len);
    } else {
        fn_82CE7E00(a, 0);
    }
    return a;
}
