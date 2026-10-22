typedef unsigned char png_byte;
typedef unsigned short png_uint_16;
typedef unsigned int png_uint_32;

typedef struct png_info {
  png_uint_32 width;          /* 0x00 */
  png_uint_32 height;         /* 0x04 */
  png_uint_32 valid;          /* 0x08 */
  png_uint_32 rowbytes;       /* 0x0c */
  void *palette;              /* 0x10 */
  png_uint_16 num_palette;    /* 0x14 */
  png_uint_16 num_trans;      /* 0x16 */
  png_byte bit_depth;         /* 0x18 */
  png_byte color_type;        /* 0x19 */
  png_byte compression_type;  /* 0x1a */
  png_byte filter_type;       /* 0x1b */
  png_byte interlace_type;    /* 0x1c */
  png_byte channels;          /* 0x1d */
  png_byte pixel_depth;       /* 0x1e */
  png_byte spare_byte;        /* 0x1f */
  png_byte signature[8];      /* 0x20 */
  float gamma;                /* 0x28 */
} png_info;

typedef struct png_struct {
  char pad0[0x560];
  png_uint_32 transformations; /* 0x560 */
  char pad1[0x60a - 0x564];
  png_uint_16 num_trans;       /* 0x60a */
  char pad2[0x630 - 0x60c];
  float gamma;                 /* 0x630 */
  char pad3[0x674 - 0x634];
  png_byte *palette_lookup;    /* 0x674 */
} png_struct;

void fn_829AF340(png_struct *png_ptr, png_info *info_ptr)
{
   if (png_ptr->transformations & 0x1000)
   {
      if (info_ptr->color_type == 3)
      {
         if (png_ptr->num_trans)
            info_ptr->color_type = 6;
         else
            info_ptr->color_type = 2;
         info_ptr->bit_depth = 8;
         info_ptr->num_trans = 0;
      }
      else
      {
         if (png_ptr->num_trans)
            info_ptr->color_type |= 4;
         if (info_ptr->bit_depth < 8)
            info_ptr->bit_depth = 8;
         info_ptr->num_trans = 0;
      }
   }

   if (png_ptr->transformations & 0x2000)
   {
      info_ptr->gamma = png_ptr->gamma;
   }

   if ((png_ptr->transformations & 0x400) && (info_ptr->bit_depth == 16))
      info_ptr->bit_depth = 8;

   if (png_ptr->transformations & 0x40)
   {
      if (((info_ptr->color_type == 2) ||
          (info_ptr->color_type == 6)) &&
          png_ptr->palette_lookup && info_ptr->bit_depth == 8)
      {
         info_ptr->color_type = 3;
      }
   }

   if ((png_ptr->transformations & 4) && (info_ptr->bit_depth < 8))
      info_ptr->bit_depth = 8;

   if (info_ptr->color_type == 3)
      info_ptr->channels = 1;
   else if (info_ptr->color_type & 2)
      info_ptr->channels = 3;
   else
      info_ptr->channels = 1;

   if (info_ptr->color_type & 4)
      info_ptr->channels++;

   if ((png_ptr->transformations & 0x8000) &&
       ((info_ptr->color_type == 2) ||
       (info_ptr->color_type == 0)))
      info_ptr->channels++;

   info_ptr->pixel_depth = (png_byte)(info_ptr->channels *
      info_ptr->bit_depth);

   info_ptr->rowbytes = ((info_ptr->width * (png_uint_32)info_ptr->pixel_depth + 7) >> 3);
}
