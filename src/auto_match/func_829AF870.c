typedef struct png_row_info {
    unsigned int width;
    unsigned int rowbytes;
    unsigned char color_type;
    unsigned char bit_depth;
    unsigned char channels;
    unsigned char pixel_depth;
} png_row_info;

void fn_829AF870(png_row_info *row_info, unsigned char *row)
{
    if (row_info->bit_depth == 16) {
        unsigned char *sp = row;
        unsigned char *dp = row;
        unsigned int i;
        unsigned int istop = row_info->width * row_info->channels;

        for (i = 0; i < istop; i++, sp += 2, dp++) {
            *dp = *sp;
        }
        row_info->bit_depth = 8;
        row_info->pixel_depth = (unsigned char)(8 * row_info->channels);
        row_info->rowbytes = row_info->width * row_info->channels;
    }
}
