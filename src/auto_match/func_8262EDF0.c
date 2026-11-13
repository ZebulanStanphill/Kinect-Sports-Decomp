#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int uStack_9;


unsigned __int64 fn_8262EDF0(float *param_1)

{
  unsigned char uVar1;
  unsigned char uStack_9;
  
  uStack_9 = (unsigned char)(__int64)param_1[1];
  uVar1 = uStack_9;
  uStack_9 = (unsigned char)(__int64)*param_1;
  return ((unsigned __int64)CONCAT11(uStack_9,uVar1) << 8 | (__int64)param_1[2] & 0xffU) << 8 |
         (__int64)param_1[3] & 0xffU;
}

