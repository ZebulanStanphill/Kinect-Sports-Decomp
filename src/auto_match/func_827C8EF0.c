extern int free();


void jpeg_free_large(unsigned __int64 cinfo,unsigned __int64 object)

{
  free(object);
  return;
}
