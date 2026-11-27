#include "xdk/vectorintrinsics.h"

typedef struct Entry_82F538A0 {
    __vector4 v;
    char pad[0x40];
} Entry_82F538A0;

void fn_82F538A0(__vector4 *out, Entry_82F538A0 *entries, int i)
{
    *out = entries[i].v;
}
