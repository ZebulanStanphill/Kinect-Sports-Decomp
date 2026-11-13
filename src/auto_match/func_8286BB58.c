extern int fn_8286B5F8();
extern int fn_8286B670();
extern int fn_8286B778();
extern int fn_8286B7E0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8286BB58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  int iVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  lVar1 = param_2 - param_1;
  iVar4 = (int)lVar1 / 0x1c;
  uVar5 = param_2;
  if (0x20 < iVar4) {
    do {
      iVar2 = (int)param_3;
      param_2 = uVar5;
      if (iVar2 < 1) break;
      fn_8286B7E0(&uStack_40,param_1,uVar5);
      param_3 = (__int64)(iVar2 >> 1) + (unsigned __int64)(iVar2 < 0 && (param_3 & 1) != 0);
      param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar3 = (unsigned __int64)uStack_3c;
      param_2 = (unsigned __int64)uStack_40;
      if ((int)(uStack_40 - (int)param_1) / 0x1c < (int)((int)uVar5 - uStack_3c) / 0x1c) {
        fn_8286BB58(param_1,param_2,param_3);
        param_1 = uVar3;
        param_2 = uVar5;
      }
      else {
        fn_8286BB58(uVar3,uVar5,param_3);
      }
      lVar1 = param_2 - param_1;
      iVar4 = (int)lVar1 / 0x1c;
      uVar5 = param_2;
    } while (0x20 < iVar4);
    if (0x20 < iVar4) {
      if (iVar4 < 2) {
        return;
      }
      fn_8286B5F8(param_1,param_2,0,0);
      while (1 < iVar4) {
        fn_8286B778(param_1,param_2,0);
        lVar1 = lVar1 + -0x1c;
        param_2 = param_2 - 0x1c;
        iVar4 = (int)lVar1 / 0x1c;
      }
      return;
    }
  }
  if (1 < iVar4) {
    fn_8286B670(param_1,param_2,0);
  }
  return;
}

