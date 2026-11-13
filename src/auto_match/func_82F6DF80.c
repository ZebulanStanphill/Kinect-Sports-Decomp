#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int uStack00000010;


unsigned __int64 fn_82F6DF80(unsigned __int64 param_1)

{
  unsigned int uStack00000010;
  
  uStack00000010 = (unsigned int)((unsigned __int64)param_1 >> 0x20);
  return CONCAT44(uStack00000010 & 0x7fffffff | ~uStack00000010 & 0x80000000,(int)param_1);
}

