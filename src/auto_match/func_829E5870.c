#include <string.h>

typedef struct Buffer_829E5870 {
    unsigned char header[0x64];
    unsigned char data[0x400];
} Buffer_829E5870;

typedef struct Pair_829E5870 {
    Buffer_829E5870 *buffers[2];
    unsigned char ready;
} Pair_829E5870;

extern void *fn_8265C940(unsigned int size, unsigned int tag);

static __forceinline int Create(Buffer_829E5870 **out)
{
    Buffer_829E5870 *b = (Buffer_829E5870 *)fn_8265C940(0x464, 0x209d0000);
    *out = b;
    if (b == 0)
        return 0x8007000e;
    memset(b->header, 0, 0x64);
    memset(b->data, 0, 0x400);
    return 0;
}
int fn_829E5870(Pair_829E5870 *self)
{
    int hr;
    hr = Create(&self->buffers[0]);
    if (hr < 0)
        return hr;
    hr = Create(&self->buffers[1]);
    if (hr < 0)
        return hr;
    self->ready = 1;
    return 0;
}
