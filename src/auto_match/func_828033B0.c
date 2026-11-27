#include "xdk/vectorintrinsics.h"

void fn_828033B0(char *base, int offset, __vector4 value)
{
    *(__vector4 *)(base + offset) = value;
}
