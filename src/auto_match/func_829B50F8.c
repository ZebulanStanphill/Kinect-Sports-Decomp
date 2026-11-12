/* Corresponds to libpng 1.0.5 pngmem.c png_free (open-source libpng 1.0.5), as altered by D3DX:
   free() is replaced by fn_8265C990 (ptr, 0x24810000), the tagged free that its png_malloc's
   allocator fn_8265C940 pairs with. */
typedef void  * png_voidp;
typedef struct png_struct_def png_struct;
typedef png_struct  * png_structp;

extern void fn_8265C990(png_voidp ptr, unsigned long attributes);

void
fn_829B50F8(png_structp png_ptr, png_voidp ptr)
{
   if (png_ptr == ((void *)0) || ptr == ((void *)0))
      return;

   fn_8265C990(ptr, 0x24810000);
}
