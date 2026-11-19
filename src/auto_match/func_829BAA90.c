extern int fn_8265C940();


unsigned int d3dx_jpeg_get_large(unsigned __int64 cinfo,__int64 sizeofobject)

{
  unsigned int aligned;
  unsigned int raw;
  
  raw = fn_8265C940(sizeofobject + 0x10,0x24810000);
  if (raw == 0) {
    return 0;
  }
  aligned = raw + 0x10U & 0xfffffff0;
  *(char *)(aligned - 1) = (char)aligned - (char)raw;
  return aligned;
}

