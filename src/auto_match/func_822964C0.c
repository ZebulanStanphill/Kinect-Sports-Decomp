#define CONCAT17(h,l) ((unsigned __int64)((((unsigned char)(h)) << 56) | ((unsigned __int64)(l))))
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_82296E38();
extern int fn_82F85C08();
extern unsigned int uStack00000020;
extern unsigned int uStack_3e;


unsigned __int64 *
fn_822964C0(unsigned __int64 *param_1,__int64 param_2,unsigned __int64 param_3,unsigned char *param_4,
             unsigned __int64 param_5)

{
  int iVar1;
  short sVar2;
  unsigned __int64 uStack00000020;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int auStack_3c [15];
  
  uStack00000020 = param_3;
  if ((param_5 & 0xffffffff) != 0) {
    uStack00000020 = ((((unsigned __int64)(uStack00000020)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    iVar1 = (((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF);
    do {
      auStack_40[0] = *param_4;
      uStack_3e = 0;
      auStack_3c[0] = 0;
      fn_82F85C08(&uStack_3e,auStack_40,1,auStack_3c,param_2 + 8);
      if ((iVar1 == 0) || (sVar2 = fn_82296E38(iVar1,uStack_3e), sVar2 == -1)) {
        uStack00000020 = CONCAT17(1,(((unsigned __int64)(uStack00000020) >> 8) & 0xFFFFFFFFFFFFFF));
      }
      param_5 = param_5 - 1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  *param_1 = uStack00000020;
  return param_1;
}

