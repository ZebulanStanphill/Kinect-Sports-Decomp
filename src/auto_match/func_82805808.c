typedef struct Bitmap_82805808 {
    char unknown00[0xc];
    unsigned char *data; /* 0x0c */
    char unknown10[0xe];
    unsigned short width; /* 0x1e */
    unsigned short pad20;
    unsigned short height; /* 0x22 */
} Bitmap_82805808;

static __forceinline int CountEdges_82805808(unsigned char bits, unsigned int x, unsigned int width)
{
    int count = 0;
    unsigned int mask;

    for (mask = 0x80; mask != 0x10; mask >>= 1) {
        if (x >= width) {
            break;
        }
        if ((bits & mask) != 0 && (bits & (mask >> 3)) == 0) {
            count++;
        }
        x++;
    }
    return count;
}

int fn_82805808(Bitmap_82805808 *self)
{
    int total = 0;
    unsigned char *p = self->data;
    unsigned int width;
    unsigned int x;
    unsigned int y;
    unsigned char bits;

    for (y = 0; y < self->height; y++) {
        width = self->width;
        for (x = 0; x < width; x += 9) {
            bits = *p;
            total += CountEdges_82805808(bits, x, width);
            switch (bits & 3) {
            case 3:
                p++;
                total += CountEdges_82805808(*p, x + 3, width);
                p++;
                total += CountEdges_82805808(*p, x + 6, width);
                break;
            case 2:
                p++;
                total += CountEdges_82805808(*p, x + 3, width);
                break;
            case 1:
                p++;
                total += CountEdges_82805808(*p, x + 6, width);
                break;
            }
            p++;
        }
    }
    return total;
}
