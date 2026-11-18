typedef struct Decoder_82C2C380 {
    char pad0[0x22];
    unsigned short channels; /* 0x22 */
    char pad24[0x100 - 0x24];
    int frameSize; /* 0x100 */
    char pad104[0x144 - 0x104];
    float *history; /* 0x144 */
    char pad148[0x184 - 0x148];
    int available; /* 0x184 */
    int position;  /* 0x188 */
    char pad18C[0x1c0 - 0x18c];
    int upsample; /* 0x1c0 */
    char pad1C4[4];
    int shift;      /* 0x1c8 */
    int downsample; /* 0x1cc */
    char pad1D0[4];
    int step; /* 0x1d4 */
} Decoder_82C2C380;

extern void *memcpy(void *dst, const void *src, unsigned int size);

void fn_82C2C380(Decoder_82C2C380 *self)
{
    int frameSize;
    int half;
    int channel;

    if (self->available < self->step) {
        return;
    }
    if (self->downsample != 0) {
        frameSize = self->frameSize >> self->shift;
    } else if (self->upsample != 0) {
        frameSize = self->frameSize << self->shift;
    } else {
        frameSize = self->frameSize;
    }
    half = self->step >> 1;
    for (channel = 0; channel < self->channels; channel++) {
        float *dst = self->history + (frameSize * 3 / 2 * channel - half + (frameSize >> 1));

        memcpy(dst, dst + self->step, half * 4);
    }
    self->available -= self->step;
    self->position -= self->step;
}
