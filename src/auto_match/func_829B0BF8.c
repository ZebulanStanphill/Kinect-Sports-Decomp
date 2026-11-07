typedef unsigned char png_byte;
typedef unsigned short png_uint_16;
typedef unsigned int png_uint_32;

typedef struct Color_829B0BF8 {
    png_byte red;
    png_byte green;
    png_byte blue;
} Color_829B0BF8;

typedef struct SigBit_829B0BF8 {
    png_byte red;
    png_byte green;
    png_byte blue;
} SigBit_829B0BF8;

typedef struct Png_829B0BF8 {
    char pad0[0x560];
    png_uint_32 transformations;      /* 0x560 */
    char pad1[0x604 - 0x564];
    Color_829B0BF8 *palette;          /* 0x604 */
    png_uint_16 num_palette;          /* 0x608 */
    char pad2[0x616 - 0x60A];
    png_byte color_type;              /* 0x616 */
    char pad3[0x638 - 0x617];
    png_byte *gamma_table;            /* 0x638 */
    char pad4[0x650 - 0x63C];
    SigBit_829B0BF8 sig_bit;          /* 0x650 */
} Png_829B0BF8;

extern void fn_829B0868(Png_829B0BF8 *png_ptr);

void fn_829B0BF8(Png_829B0BF8 *png_ptr)
{
    int color_type = png_ptr->color_type;

    if (png_ptr->transformations & 0x602000)
    {
        fn_829B0868(png_ptr);
        if (color_type == 3)
        {
            int i;
            int num_palette = png_ptr->num_palette;
            Color_829B0BF8 *palette = png_ptr->palette;

            for (i = 0; i < num_palette; i++)
            {
                palette[i].red = png_ptr->gamma_table[palette[i].red];
                palette[i].green = png_ptr->gamma_table[palette[i].green];
                palette[i].blue = png_ptr->gamma_table[palette[i].blue];
            }
        }
    }

    if ((png_ptr->transformations & 8) && color_type == 3)
    {
        png_uint_16 i;
        png_uint_16 istop = png_ptr->num_palette;
        int sr = 8 - png_ptr->sig_bit.red;
        int sg = 8 - png_ptr->sig_bit.green;
        int sb = 8 - png_ptr->sig_bit.blue;

        if (sr < 0 || sr > 8)
            sr = 0;
        if (sg < 0 || sg > 8)
            sg = 0;
        if (sb < 0 || sb > 8)
            sb = 0;

        for (i = 0; i < istop; i++)
        {
            png_ptr->palette[i].red >>= sr;
            png_ptr->palette[i].green >>= sg;
            png_ptr->palette[i].blue >>= sb;
        }
    }
}
