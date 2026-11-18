typedef struct Histogram_829E3D98 {
    unsigned char pad0[0x64];
    unsigned int bins[256]; /* 0x64 */
} Histogram_829E3D98;

typedef struct Image_829E3D98 {
    unsigned char pad0[0xc];
    Histogram_829E3D98 *histogram; /* 0xc */
    unsigned char pad10[0x68];
    int width;  /* 0x78 */
    int height; /* 0x7c */
} Image_829E3D98;

float fn_829E3D98(Image_829E3D98 *image, unsigned char threshold)
{
    float sum;
    int i;

    sum = 0.0f;
    for (i = threshold; i <= 0xff; i++) {
        sum += (float)image->histogram->bins[i];
    }
    return sum / (float)(image->height * image->width / 2);
}
