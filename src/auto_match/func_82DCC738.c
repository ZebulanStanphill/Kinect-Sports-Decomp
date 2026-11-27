// Havok: true (0x80, the "all elements equal" CR6 bit) when every bit set in *b is also
// set in *a, tested as (~b | a) == all ones.

#include "xdk/vectorintrinsics.h"

unsigned int fn_82DCC738(const __vector4 *a, const __vector4 *b)
{
    unsigned int cr;

    __vcmpequwR(__vor(__vnor(*b, *b), *a), __vspltisw(-1), &cr);
    return cr & 0x80;
}
