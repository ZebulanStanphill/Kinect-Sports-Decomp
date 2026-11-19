typedef struct Bitmap_827B5828 {
    int pad[3];
    int pitch;           /* 0x0c */
    unsigned char *bits; /* 0x10 */
} Bitmap_827B5828;

typedef struct Image_827B5828 {
    int pad[2];
    Bitmap_827B5828 bitmap; /* 0x08 */
} Image_827B5828;

/* Scales the contrast of a rectangle of dst around the level mid. */
void fn_827B5828(void *self, Image_827B5828 *dst, int x, int y, unsigned int width, unsigned int height,
                 float contrast, int mid)
{
    unsigned int row;
    unsigned int column;

    if (contrast == 1.0f) {
        return;
    }
    for (row = 0; row < height; row++) {
        Bitmap_827B5828 *dstBitmap = &dst->bitmap;
        unsigned char *dstPixel = (row + y) * dstBitmap->pitch + x + dstBitmap->bits;

        for (column = 0; column < width; column++) {
            int value = (int)((float)(*dstPixel - mid) * contrast + 0.5f) + mid;

            if (value < 0) {
                value = 0;
            }
            if (value > 0xff) {
                value = 0xff;
            }
            *dstPixel++ = (unsigned char)value;
        }
    }
}
