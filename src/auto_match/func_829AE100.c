/* libpng png_set_IHDR (build with user limits fixed at 1000000). */
typedef unsigned int png_uint_32;
typedef unsigned char png_byte;
typedef unsigned int png_size_t;

typedef struct png_info_829AE100 {
    png_uint_32 width;
    png_uint_32 height;
    png_uint_32 valid;
    png_size_t rowbytes;
    void *palette;
    unsigned short num_palette;
    unsigned short num_trans;
    png_byte bit_depth;
    png_byte color_type;
    png_byte compression_type;
    png_byte filter_type;
    png_byte interlace_type;
    png_byte channels;
    png_byte pixel_depth;
} png_info_829AE100;

extern void fn_829AB0F0(void *png_ptr, const char *message);
extern void png_warning(void *png_ptr, const char *message);

void fn_829AE100(void *png_ptr, png_info_829AE100 *info_ptr, png_uint_32 width, png_uint_32 height,
                 int bit_depth, int color_type, int interlace_type, int compression_type, int filter_type)
{
    if (png_ptr == 0 || info_ptr == 0)
        return;

    if (width > 1000000L || height > 1000000L)
        fn_829AB0F0(png_ptr, "image size exceeds user limits in IHDR");

    info_ptr->width = width;
    info_ptr->height = height;
    info_ptr->bit_depth = (png_byte)bit_depth;
    info_ptr->color_type = (png_byte)color_type;
    info_ptr->compression_type = (png_byte)compression_type;
    info_ptr->filter_type = (png_byte)filter_type;
    info_ptr->interlace_type = (png_byte)interlace_type;
    if (info_ptr->color_type == 3)
        info_ptr->channels = 1;
    else if (info_ptr->color_type & 2)
        info_ptr->channels = 3;
    else
        info_ptr->channels = 1;
    if (info_ptr->color_type & 4)
        info_ptr->channels++;
    info_ptr->pixel_depth = (png_byte)(info_ptr->channels * info_ptr->bit_depth);

    /* check for overflow */
    if (width > (png_uint_32)0x7fffffffL / ((info_ptr->pixel_depth + 7) >> 3)) {
        png_warning(png_ptr, "Width too large to process image data; rowbytes will overflow.");
        info_ptr->rowbytes = (png_size_t)0;
    } else
        info_ptr->rowbytes = (info_ptr->width * info_ptr->pixel_depth + 7) >> 3;
}
