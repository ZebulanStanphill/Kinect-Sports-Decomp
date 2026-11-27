#include "xdk/vectorintrinsics.h"

typedef struct Entry_82F53928 {
    char pad0[0x10];
    __vector4 value; /* 0x10 */
    char pad20[0x30];
} Entry_82F53928;

void fn_82F53928(Entry_82F53928 *entries, int index, __vector4 value)
{
    entries[index].value = value;
}
