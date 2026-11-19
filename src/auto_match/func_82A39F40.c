typedef struct Decoder_82A39F40 {
    int writePosition;       /* 0x0000 */
    unsigned int readOffset; /* 0x0004 */
    void *output;            /* 0x0008 */
    char pad000c[0x10];
    int start;  /* 0x001c */
    int length; /* 0x0020 */
    char pad0024[8];
    void *history;       /* 0x002c */
    int channelReady[6]; /* 0x0030 */
    char pad0048[0x818];
    int pending;      /* 0x0860 */
    unsigned int end; /* 0x0864 */
    char pad0868[0x10a];
    unsigned char started; /* 0x0972 */
    unsigned char reset;   /* 0x0973 */
    char pad0974[0x1bac];
    int frame; /* 0x2520 */
    char pad2524[0x1dfc];
    int base; /* 0x4320 */
} Decoder_82A39F40;

extern void fn_82A3D230(Decoder_82A39F40 *decoder, int a, int start, int length, int *frame, int b);
extern void fn_82A3CED8(Decoder_82A39F40 *decoder, int a, int b, int frame);
extern void fn_82A3B5D8(Decoder_82A39F40 *decoder, int a);
extern void fn_82A3B768(Decoder_82A39F40 *decoder);
extern void *memset(void *dst, int value, unsigned int size);

int fn_82A39F40(Decoder_82A39F40 *self, unsigned int *position)
{
    unsigned int end = self->end;
    unsigned int remaining;
    int delta;
    int needed;
    int frame;

    self->started = 0;
    delta = *position - end;
    remaining = end - self->readOffset;
    if (remaining < self->readOffset) {
        needed = remaining + delta;
    } else {
        needed = self->readOffset + delta;
    }
    if (needed <= self->writePosition - self->base + (int)*position) {
        fn_82A3D230(self, 0, self->start, self->length, &frame, 0);
        fn_82A3CED8(self, 0, 0, frame);
        fn_82A3B5D8(self, 0);
        fn_82A3B768(self);
        memset(self->output, 0, 0x40000);
        memset(self->history, 0, 0x2000);
        self->pending = 0;
        self->channelReady[3] = 1;
        self->channelReady[4] = 1;
        self->channelReady[5] = 1;
        self->channelReady[0] = 1;
        self->channelReady[1] = 1;
        self->channelReady[2] = 1;
        self->reset = 1;
        self->start = 0;
        self->length = 0;
        self->frame = frame;
        *position = end;
        return 1;
    }
    return 0;
}
