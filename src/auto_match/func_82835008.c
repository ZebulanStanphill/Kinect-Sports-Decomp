extern int fn_828344D0();
extern int fn_82834548();
extern int fn_82834A58();
extern int fn_82834D10();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82835008(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  iVar1 = ((int)param_2 - (int)param_1) / 0xc;
  uVar4 = param_2;
  if (0x20 < iVar1) {
    do {
      iVar3 = (int)param_3;
      param_2 = uVar4;
      if (iVar3 < 1) break;
      fn_82834A58(&uStack_50,param_1,uVar4,param_4);
      param_3 = (__int64)(iVar3 >> 1) + (unsigned __int64)(iVar3 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar2 = (unsigned __int64)uStack_4c;
      param_2 = (unsigned __int64)uStack_50;
      if ((int)(uStack_50 - (int)param_1) / 0xc < (int)((int)uVar4 - uStack_4c) / 0xc) {
        fn_82835008(param_1,param_2,param_3,param_4);
        param_1 = uVar2;
        param_2 = uVar4;
      }
      else {
        fn_82835008(uVar2,uVar4,param_3,param_4);
      }
      iVar1 = ((int)param_2 - (int)param_1) / 0xc;
      uVar4 = param_2;
    } while (0x20 < iVar1);
    if (0x20 < iVar1) {
      if (1 < iVar1) {
        fn_828344D0(param_1,param_2,param_4,0,0);
      }
      fn_82834D10(param_1,param_2,param_4);
      return;
    }
  }
  if (1 < iVar1) {
    fn_82834548(param_1,param_2,param_4,0);
  }
  return;
}

