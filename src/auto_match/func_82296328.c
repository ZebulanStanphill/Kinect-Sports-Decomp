#define CONCAT17(h,l) ((unsigned __int64)((((unsigned char)(h)) << 56) | ((unsigned __int64)(l))))
extern int fn_82296E38();
extern unsigned int uStack00000018;


unsigned __int64 * fn_82296328(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  short sVar1;
  unsigned __int64 uStack00000018;
  
  uStack00000018 = param_2;
  if ((int)param_4 != 0) {
    do {
      if (((param_2 & 0xffffffff) == 0) ||
         (sVar1 = fn_82296E38(param_2 & 0xffffffff,param_3), sVar1 == -1)) {
        uStack00000018 = CONCAT17(1,(((unsigned __int64)(uStack00000018) >> 8) & 0xFFFFFFFFFFFFFF));
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  *param_1 = uStack00000018;
  return param_1;
}

