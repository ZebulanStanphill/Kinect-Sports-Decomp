#include "xdk/vectorintrinsics.h"

typedef struct Entry_82F53900 {
    __vector4 v;
    char pad[0x40];
} Entry_82F53900;

void fn_82F53900(Entry_82F53900 *entries, int i, __vector4 v)
{
    entries[i].v = v;
}
