#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82196750;

void fn_82444B00(unsigned char *self, __vector4 *out)
{
    unsigned char *base = self - 8;
    unsigned char *object = **(unsigned char ***)(base + 4);
    __vector4 value;
    if (object) {
        value = *(__vector4 *)(object + 0x50);
    } else {
        __vector4 zero = __VMXGetReg(77);
        value = zero;
    }
    out[1] = value;
    object = **(unsigned char ***)(base + 4);
    if (object) {
        value = *(__vector4 *)(object + 0xc0);
    } else {
        value = lbl_82196750;
    }
    out[2] = value;
}
