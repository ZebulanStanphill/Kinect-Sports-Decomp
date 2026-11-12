/* D3DX's jpeg_free_large (its own memory backend for libjpeg 6b, in place of jmemnobs.c): frees a block that d3dx_jpeg_get_large aligned, whose byte before the object holds the alignment offset. Hand-written; not upstream code. */
typedef unsigned int size_t;
typedef struct jpeg_common_struct * j_common_ptr;
extern void fn_8265C990 (void * ptr, unsigned int tag);

void
fn_829BAAE8 (j_common_ptr cinfo, void * object, size_t sizeofobject)
{
  if (object != ((void *)0))
    fn_8265C990((char *) object - ((unsigned char *) object)[-1], 0x24810000);
}
