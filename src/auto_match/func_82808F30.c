#include "xdk/vectorintrinsics.h"

void fn_82808F30(char *base, int offset, __vector4 value)
{
    *(__vector4 *)(base + offset) = value;
}
