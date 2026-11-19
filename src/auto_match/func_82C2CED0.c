typedef struct Channel_82C2CED0 {
    char pad000[0x3c];
    float *samples; /* 0x3c */
    char pad040[0x6f0 - 0x40];
} Channel_82C2CED0;

typedef struct Decoder_82C2CED0 Decoder_82C2CED0;

struct Decoder_82C2CED0 {
    char pad000[0x22];
    unsigned short channelCount; /* 0x22 */
    char pad024[0x6e - 0x24];
    unsigned short bitsPerSample; /* 0x6e */
    char pad070[0x140 - 0x70];
    Channel_82C2CED0 *channels; /* 0x140 */
    char pad144[0x208 - 0x144];
    void (*write)(int value, void *context, Decoder_82C2CED0 *self, int index); /* 0x208 */
};

int fn_82C2CED0(Decoder_82C2CED0 *self, void *context, unsigned short sampleCount)
{
    int index;
    short sample;
    short channel;
    float value;
    int limit;
    int out;
    int bound;

    index = 0;
    for (sample = 0; sample < sampleCount; sample++) {
        for (channel = 0; channel < self->channelCount; channel++) {
            value = self->channels[channel].samples[sample];
            if (value < 0.0f) {
                limit = 1 << (self->bitsPerSample - 1);
                bound = ~(limit - 1);
                out = (int)(value - 0.5f);
                if (out < bound)
                    out = bound;
            } else {
                limit = 1 << (self->bitsPerSample - 1);
                bound = limit - 1;
                out = (int)(value + 0.5f);
                if (out > bound)
                    out = bound;
            }
            self->write(out, context, self, index);
            index++;
        }
    }
    return 0;
}
