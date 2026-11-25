typedef struct Codec_82A6B9E0 {
    char pad0[0x50];
    int rate; /* 0x50 */
    char pad54[0xF4 - 0x54];
    int levelCount; /* 0xF4 */
    char padF8[0xFC - 0xF8];
    int length; /* 0xFC */
    char pad100[0x138 - 0x100];
    int firstSize; /* 0x138 */
    char pad13C[0x160 - 0x13C];
    int *sizes; /* 0x160 */
} Codec_82A6B9E0;

extern double fn_82F6B2A8(double x); /* ceil */

void fn_82A6B9E0(Codec_82A6B9E0 *self)
{
    int level;
    float scale;
    int length;
    int size;
    int half;

    level = 0;
    scale = 1.0f / (float)self->rate;
    if (self->levelCount > 0) {
        do {
            int tooSmall;

            length = self->length / (1 << level);
            size = (int)(float)fn_82F6B2A8((float)length * scale * 220.0f + 0.5f);
            tooSmall = size < 4;
            if (tooSmall) {
                size = 4;
            }
            half = length / 2;
            if (size >= half) {
                size = half;
            }
            self->sizes[level] = size;
            level++;
        } while (level < self->levelCount);
    }
    self->firstSize = self->sizes[0];
}
