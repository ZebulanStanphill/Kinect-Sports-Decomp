#include "xdk/vectorintrinsics.h"

extern __vector4 lbl_8323B1A0;
extern __vector4 *fn_82D0B6F0(void *);

__vector4 *fn_82D1EA60(__vector4 *out, char *self)
{
    __vector4 sum = lbl_8323B1A0;
    int count = *(int *)(self + 0x18);
    if (count > 0) {
        char *node = *(char **)(self + 0x14);
        while (node != 0) {
            sum = __vaddfp(sum, *(__vector4 *)(node + 0x10));
            node = *(char **)node;
        }
        {
            float scale = 1.0f / (float)count;
            *out = __vmulfp(sum, __vspltw(__lvlx(&scale, 0), 0));
        }
    } else {
        if (*(void **)(self + 0x7b8) != 0) {
            sum = *fn_82D0B6F0(*(void **)(self + 0x7b8));
            *out = sum;
        } else {
            *out = sum;
        }
    }
    return out;
}
