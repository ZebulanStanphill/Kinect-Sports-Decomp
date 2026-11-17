typedef struct Image_829BF4F8 {
    char pad[0x70];
    unsigned int width;
} Image_829BF4F8;

void fn_829BF4F8(Image_829BF4F8 *image, unsigned char ***input, unsigned int row, unsigned char **output,
                 int rows)
{
    unsigned int width = image->width;
    unsigned int column;
    unsigned char *source;
    unsigned char *dest;
    unsigned char value;
    while (--rows >= 0) {
        source = (*input)[row++];
        dest = *output++;
        for (column = 0; column < width; column++) {
            value = source[column];
            dest[2] = value;
            dest[1] = value;
            dest[0] = value;
            dest += 3;
        }
    }
}
