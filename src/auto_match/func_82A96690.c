#include "xdk/vectorintrinsics.h"

static __forceinline unsigned short FloatToHalf(float value)
{
    unsigned short result;
    __vector4 v = __lvlx(&value, 0);
    v = __vpkd3d(v, v, 5, 2, 2);
    v = __vsplth(v, 0);
    __stvehx(v, &result, 0);
    return result;
}

typedef struct Fields_82A96690 {
    char pad[12];
    unsigned int index[4]; /* 0x0c */
    unsigned int mask[4];  /* 0x1c */
    unsigned int shift[4]; /* 0x2c */
} Fields_82A96690;

extern void fn_82AA7710(void *dst, const void *src, unsigned int format);

void fn_82A96690(unsigned short *data, const Fields_82A96690 *fields, __vector4 input)
{
    float values[4];
    unsigned short value;
    int i;
    *(__vector4 *)values = input;
    for (i = 0; i < 4; i++) {
        value = (unsigned short)((FloatToHalf(values[i]) << fields->shift[i]) & fields->mask[i]);
        fn_82AA7710(&value, &value, 0x20001);
        data[fields->index[i]] |= value;
    }
}
