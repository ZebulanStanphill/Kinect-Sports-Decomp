typedef struct Scale_82805F78 {
    int reserved;
    const float *values; /* 0x04 */
    char pad[0x16];
    unsigned short count; /* 0x1e */
} Scale_82805F78;

typedef struct Stream_82805F78 {
    char pad[0x24];
    const unsigned char *flags; /* 0x24 */
    int reserved28;
    const int *base;            /* 0x2c */
    const unsigned char *width; /* 0x30 */
} Stream_82805F78;

void fn_82805F78(const Scale_82805F78 *scale, Stream_82805F78 *stream, float **out, unsigned char *bitOffset,
                 const unsigned int **words, unsigned int index)
{
    unsigned int mask;
    unsigned int flags = *stream->flags;
    mask = 0x80;
    do {
        if (index >= scale->count) {
            return;
        }
        if (mask & flags) {
            if ((mask >> 3) & flags) {
                ++stream->base;
            } else {
                int base = *stream->base++;
                unsigned char width = *stream->width++;
                unsigned int maskBits = (1u << width) - 1;
                unsigned char bit = *bitOffset;
                const unsigned int *src = *words;
                unsigned int data = ((src[1] << 1) << (31 - bit)) | (src[0] >> bit);
                **out = ((float)(data & maskBits) + (float)base) * scale->values[index];
                {
                    unsigned int offset = (unsigned char)(*bitOffset + width);
                    *bitOffset = offset & 31;
                    *words = (const unsigned int *)((const char *)*words + ((offset >> 3) & ~3u));
                }
            }
        }
        mask >>= 1;
        ++index;
        ++*out;
    } while (mask != 0x10);
}
