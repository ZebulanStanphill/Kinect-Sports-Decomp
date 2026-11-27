#include "xdk/vectorintrinsics.h"

extern void fn_82F53900(void *, void *, __vector4);
extern void fn_82F53910(void *, void *, __vector4);
extern void fn_82F53958(void *, void *, int);

void fn_82F4F0D0(void *a, __vector4 *vecs, int *ints, void *b, int idx)
{
    __vector4 *v = &vecs[idx];
    fn_82F53900(a, b, *v);
    fn_82F53958(a, b, ints[idx]);
    if (ints[idx] == 2) {
        fn_82F53910(a, b, *v);
    }
}
