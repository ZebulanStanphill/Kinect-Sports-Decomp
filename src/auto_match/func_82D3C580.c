#include "xdk/vectorintrinsics.h"

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

// Zero `count` hkVector4s (setZero4: v ^ v); the first two parameters are unused here.
void fn_82D3C580(void *a, void *b, int count, __vector4 *dst)
{
    int i;
    for (i = count - 1; i >= 0; i--) {
        SetZero(dst);
        dst++;
    }
}
