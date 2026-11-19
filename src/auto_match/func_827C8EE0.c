extern int free();


void jpeg_free_small(unsigned __int64 cinfo,unsigned __int64 object)

{
  free(object);
  return;
}
