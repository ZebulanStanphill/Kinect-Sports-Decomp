#include "xdk/vectorintrinsics.h"

typedef struct Fields_82A95A58 {
    char pad[0xc];
    unsigned int index[4];
    unsigned int mask[4];
    unsigned int shift[4];
} Fields_82A95A58;

__vector4 fn_82A95A58(const unsigned char *data, const Fields_82A95A58 *fields)
{
    unsigned int out[4];
    int i;

    for (i = 0; i < 4; i++)
        out[i] = (data[fields->index[i]] & fields->mask[i]) >> fields->shift[i];
    return __vor(__lvlx(out, 0), __lvrx(out, 16));
}
