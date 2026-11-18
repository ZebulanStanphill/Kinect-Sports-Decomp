/* Audio filter stage: after the end of a stream it pads each channel of the
 * outgoing buffers with silence until the configured tail has been played
 * (marking buffers that still need more), then forwards the buffer to the
 * next stage. */
typedef struct Buffer_830565E0 {
    float *data;              /* 0x0 */
    unsigned int channelMask; /* 0x4 */
    int type;                 /* 0x8 */
    unsigned short capacity;  /* 0xC */
    unsigned short used;      /* 0xE */
} Buffer_830565E0;

typedef struct Stage_830565E0 Stage_830565E0;

typedef struct StageVtbl_830565E0 {
    void *slot00;
    void (*Process)(Stage_830565E0 *self, Buffer_830565E0 *buffer); /* 0x4 */
} StageVtbl_830565E0;

struct Stage_830565E0 {
    StageVtbl_830565E0 *vtbl;
};

typedef struct TailFilter_830565E0 {
    char pad00[0x8];
    Stage_830565E0 *next;    /* 0x08 */
    unsigned int tailLength; /* 0x0C */
    unsigned int remaining;  /* 0x10 */
    unsigned char ended;     /* 0x14 */
} TailFilter_830565E0;

extern float fn_83056488(TailFilter_830565E0 *self);
extern void *XMemSet(void *dest, int value, unsigned int count);

static __forceinline unsigned int Min_830565E0(unsigned int a, unsigned int b)
{
    return a < b ? a : b;
}

void fn_830565E0(TailFilter_830565E0 *self, Buffer_830565E0 *buffer)
{
    unsigned char ended;
    unsigned int pad;
    unsigned int channels;
    unsigned int bits;
    unsigned int i;

    fn_83056488(self);
    ended = buffer->type == 0x11;
    if (ended) {
        if (!self->ended) {
            self->remaining = self->tailLength;
        }
        pad = Min_830565E0(self->remaining, buffer->capacity - buffer->used);
        self->remaining -= pad;
        channels = 0;
        bits = buffer->channelMask;
        pad += -(buffer->used + pad) & 3;
        while (bits != 0) {
            bits &= bits - 1;
            channels++;
        }
        for (i = 0; i < channels; i++) {
            XMemSet(&buffer->data[buffer->capacity * i + buffer->used], 0, pad * 4);
        }
        buffer->used += pad;
        if (self->remaining > 0) {
            buffer->type = 0x2d;
        }
    }
    self->ended = ended;
    self->next->vtbl->Process(self->next, buffer);
}
