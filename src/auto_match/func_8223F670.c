#define CONCAT17(h,l) ((unsigned __int64)((((unsigned char)(h)) << 56) | ((unsigned __int64)(l))))
extern int fn_8223FFB8();
extern unsigned int uStack00000020;


unsigned __int64 *
fn_8223F670(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4,
             __int64 param_5)

{
  int iVar1;
  unsigned __int64 uStack00000020;
  
  uStack00000020 = param_3;
  if ((int)param_5 != 0) {
    do {
      if (((param_3 & 0xffffffff) == 0) ||
         (iVar1 = fn_8223FFB8(param_3 & 0xffffffff,*param_4), iVar1 == -1)) {
        uStack00000020 = CONCAT17(1,(((unsigned __int64)(uStack00000020) >> 8) & 0xFFFFFFFFFFFFFF));
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  *param_1 = uStack00000020;
  return param_1;
}

