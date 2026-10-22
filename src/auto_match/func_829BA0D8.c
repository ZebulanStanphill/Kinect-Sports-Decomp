typedef unsigned int png_uint_32;
typedef struct png_struct_def {
  char pad[0x558];
  png_uint_32 mode;
} png_struct;
typedef png_struct *png_structp;
typedef void *png_infop;
extern void fn_829AB0F0(png_structp png_ptr, const char *msg);
extern void fn_829AB128(png_structp png_ptr, const char *msg);
extern int fn_829B9B60(png_structp png_ptr, png_uint_32 skip);

#define PNG_HAVE_IHDR 0x01
#define PNG_HAVE_IDAT 0x04
#define PNG_AFTER_IDAT 0x08
#define PNG_HAVE_IEND 0x10

void fn_829BA0D8(png_structp png_ptr, png_infop info_ptr, png_uint_32 length)
{
   if (!(png_ptr->mode & PNG_HAVE_IHDR) || !(png_ptr->mode & PNG_HAVE_IDAT))
   {
      fn_829AB0F0(png_ptr, "No image in file");

      /* to quiet compiler warnings about unused info_ptr */
      if (info_ptr == 0)
         return;
   }

   png_ptr->mode |= (PNG_AFTER_IDAT | PNG_HAVE_IEND);

   if (length != 0)
   {
      fn_829AB128(png_ptr, "Incorrect IEND chunk length");
   }
   fn_829B9B60(png_ptr, length);
}
