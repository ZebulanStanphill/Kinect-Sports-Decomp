typedef struct Format_82E321C0 {
    char pad0[0x22];
    unsigned short channelCount; /* 0x22 */
    char pad24[0xc0];
    int frameCount; /* 0xe4 */
} Format_82E321C0;

typedef struct Buffer_82E321C0 {
    int pad0;
    unsigned char *base; /* 0x04 */
    short *end;          /* 0x08 */
    short *samples;      /* 0x0c */
    unsigned char *read; /* 0x10 */
    int pad14;
    unsigned char *flags; /* 0x18 */
} Buffer_82E321C0;

typedef struct Channel_82E321C0 {
    char pad0[0x1a8];
    Buffer_82E321C0 *buffers; /* 0x1a8 */
    char pad1ac[0x6f0 - 0x1ac];
} Channel_82E321C0;

typedef unsigned int size_t;

extern void *fn_82C2B580(unsigned int size);
void *memset(void *dst, int value, size_t size);

int fn_82E321C0(Format_82E321C0 **formatSlot, Channel_82E321C0 *channels)
{
    Format_82E321C0 *format = *formatSlot;
    int hr = 0;
    short channel;
    short i;
    Channel_82E321C0 *c;

    for (channel = 0; channel < format->channelCount; channel++) {
        c = &channels[channel];
        c->buffers = (Buffer_82E321C0 *)fn_82C2B580(0x38);
        if (c->buffers == 0) {
            hr = 0x8007000e;
            goto done;
        }
        memset(c->buffers, 0, 0x38);
        for (i = 0; i < 2; i++) {
            c->buffers[i].base = (unsigned char *)fn_82C2B580(format->frameCount * 6 + 4);
            if (c->buffers[i].base == 0) {
                hr = 0x8007000e;
                goto done;
            }
            memset(c->buffers[i].base, 0, format->frameCount * 6 + 4);
            c->buffers[i].read = c->buffers[i].base;
            c->buffers[i].flags = c->buffers[i].base + format->frameCount;
            c->buffers[i].samples = (short *)(c->buffers[i].base + format->frameCount * 2);
            c->buffers[i].end = c->buffers[i].samples + format->frameCount + 1;
        }
    }
done:
    return hr;
}
