#include "xdk/vectorintrinsics.h"

void fn_82FD3C10(char *base, int offset, __vector4 value)
{
    *(__vector4 *)(base + offset) = value;
}
