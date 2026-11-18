typedef struct Bitmap_827B5E10 {
    int pad[3];
    int pitch;           /* 0x0c */
    unsigned char *bits; /* 0x10 */
} Bitmap_827B5E10;

typedef struct Image_827B5E10 {
    int pad[2];
    Bitmap_827B5E10 bitmap; /* 0x08 */
} Image_827B5E10;

typedef struct Self_827B5E10 {
    char pad[0x2d0];
    Image_827B5E10 *mask; /* 0x2d0 */
} Self_827B5E10;

/* Darkens a rectangle of dst by the mask image: dst = dst * (255 - mask) / 255, rounded up. */
void fn_827B5E10(Self_827B5E10 *self, Image_827B5E10 *dst, int x, int y, unsigned int width,
                 unsigned int height)
{
    unsigned int row;
    unsigned int column;

    if ((int)self->mask == 0) {
        return;
    }
    for (row = 0; row < height; row++) {
        Bitmap_827B5E10 *dstBitmap = &dst->bitmap;
        Bitmap_827B5E10 *maskBitmap = &self->mask->bitmap;
        unsigned char *maskPixel = maskBitmap->pitch * row + maskBitmap->bits;
        unsigned char *dstPixel = (row + y) * dstBitmap->pitch + x + dstBitmap->bits;

        for (column = 0; column < width; column++) {
            unsigned int inverse = 0xff - *maskPixel++;

            *dstPixel = (unsigned int)(*dstPixel * inverse + 0xff) >> 8;
            dstPixel++;
        }
    }
}
