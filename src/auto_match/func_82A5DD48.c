extern void *fn_8265C940(unsigned int size, unsigned int attributes);
extern void *memcpy(void *dst, const void *src, unsigned int size);

typedef struct Src_82A5DD48 {
    int f0;
    void *data;   /* +0x4, 0x42c bytes */
} Src_82A5DD48;

int fn_82A5DD48(Src_82A5DD48 *self, void **out)
{
    int hr;
    void *copy = fn_8265C940(0x42c, 0x20970000);
    hr = copy ? 0 : 0x8007000e;
    if (hr >= 0) {
        memcpy(copy, self->data, 0x42c);
        *out = copy;
    }
    return hr;
}
