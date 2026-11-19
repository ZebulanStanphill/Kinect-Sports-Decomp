typedef struct Format_82EDC068 {
    char pad0[0xe];
    unsigned short bitCount; /* 0xe */
    int fourcc;              /* 0x10 */
} Format_82EDC068;

typedef struct Media_82EDC068 {
    char pad0[0x4];
    Format_82EDC068 *format; /* 0x4 */
} Media_82EDC068;

int abs(int value);

static __forceinline int IsPlanar(int fourcc)
{
    return fourcc == 0x56555949 || fourcc == 0x30323449 || fourcc == 0x32315659 || fourcc == 0x3231564e ||
           fourcc == 0x3131564e;
}

int fn_82EDC068(Media_82EDC068 *self, int width, int height)
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
