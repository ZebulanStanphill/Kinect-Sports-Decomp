typedef struct Buffers_82C449E8 {
    float rate;    /* 0x0 */
    int count;     /* 0x4 */
    float *first;  /* 0x8 */
    float *second; /* 0xc */
    int capacity;  /* 0x10 */
} Buffers_82C449E8;

extern void fn_82A812C8(Buffers_82C449E8 *buffers);
extern void *fn_82C2B580(unsigned int size);
void *memset(void *dst, int c, unsigned int n);

int fn_82C449E8(Buffers_82C449E8 *self, double rate, int count)
{
    int hr = 0;

    if (count < 0 || count > 100000) {
        hr = 0x80070057;
        goto done;
    }
    fn_82A812C8(self);
    self->rate = (float)rate;
    self->count = count;
    self->first = (float *)fn_82C2B580(count * 4);
    if (self->first == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(self->first, 0, self->count * 4);
    self->second = (float *)fn_82C2B580(self->count * 4);
    if (self->second == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(self->second, 0, self->count * 4);
    self->capacity = self->count;
done:
    return hr;
}
