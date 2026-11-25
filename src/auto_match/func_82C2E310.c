typedef struct Codec_82C2E310 {
    char pad0[0x50];
    int sampleRate; /* 0x50 */
    char pad54[0xf4 - 0x54];
    int numBands; /* 0xf4 */
    char padF8[0x4];
    int frameSize; /* 0xfc */
    char pad100[0x138 - 0x100];
    int firstBandWidth; /* 0x138 */
    char pad13C[0x160 - 0x13c];
    int *bandWidths; /* 0x160 */
} Codec_82C2E310;

extern double fn_82F6B2A8(double x);

void fn_82C2E310(Codec_82C2E310 *codec)
{
    Codec_82C2E310 *self = codec;
    float scale;
    int size;
    int width;
    int i;

    scale = 1.0f / (float)self->sampleRate;
    for (i = 0; i < self->numBands; i++) {
        size = self->frameSize / (1 << i);
        width = (int)fn_82F6B2A8((float)size * scale * 220.0f + 0.5f);
        if (width < 4) {
            width = 4;
        }
        if (width >= size / 2) {
            width = size / 2;
        }
        self->bandWidths[i] = width;
    }
    self->firstBandWidth = self->bandWidths[0];
}
