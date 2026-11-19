typedef struct Format_82C80360 {
    char pad0[0xe];
    unsigned short bitCount; /* 0xe */
    int fourcc;              /* 0x10 */
} Format_82C80360;

typedef struct Media_82C80360 {
    Format_82C80360 *format; /* 0x0 */
} Media_82C80360;

int abs(int value);

static __forceinline int IsPlanar(int fourcc)
{
    return fourcc == 0x56555949 || fourcc == 0x30323449 || fourcc == 0x32315659 || fourcc == 0x31313450;
}

int fn_82C80360(Media_82C80360 *self, int width, int height)
{
    int fourcc = self->format->fourcc;
    int size;
    int bitCount = self->format->bitCount;

    if (IsPlanar(fourcc)) {
        size = bitCount * width * height / 8;
    } else {
        size = (bitCount * width / 8 + 3) / 4 * height * 4;
    }
    return abs(size);
}
