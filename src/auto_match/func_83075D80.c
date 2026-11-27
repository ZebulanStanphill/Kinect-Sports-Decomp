#include "xdk/vectorintrinsics.h"

typedef struct Entry_83075D80 {
    __vector4 v;
    char pad[0x10];
} Entry_83075D80;

void fn_83075D80(Entry_83075D80 *entries, int i, __vector4 v)
{
    entries[i].v = v;
}
