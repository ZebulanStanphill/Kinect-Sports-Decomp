/* Corresponds to libpng 1.0.5 pngmem.c png_destroy_struct (open-source libpng 1.0.5), as altered by D3DX:
   free() is replaced by fn_8265C990 (struct_ptr, 0x24810000), the tagged free that its png_malloc's
   allocator fn_8265C940 pairs with. */
typedef void  * png_voidp;

extern void fn_8265C990(png_voidp ptr, unsigned long attributes);

void
fn_829B5070(png_voidp struct_ptr)
{
   if (struct_ptr != ((void *)0))
   {
      fn_8265C990(struct_ptr, 0x24810000);
   }
}
