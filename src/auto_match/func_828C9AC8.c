#define true 1
extern int fn_828C9008();
extern int fn_828C9118();
extern int fn_828C9518();
extern int fn_828C96F0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828C9AC8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  iVar1 = (int)param_2 - (int)param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_828c9b74:
      if (1 < iVar1) {
        fn_828C9118(param_1,param_2,0);
      }
      return;
    }
    iVar4 = (int)param_3;
    if (iVar4 < 1) {
      if (0x20 < iVar1) {
        if (1 < iVar1) {
          fn_828C9008(param_1,param_2,0,0);
        }
        fn_828C96F0(param_1,param_2);
        return;
      }
      goto LAB_828c9b74;
    }
    fn_828C9518(&uStack_40,param_1,param_2);
    param_3 = (__int64)(iVar4 >> 1) + (unsigned __int64)(iVar4 < 0 && (param_3 & 1) != 0);
    param_3 = (__int64)((int)param_3 >> 1) + (unsigned __int64)((int)param_3 < 0 && (param_3 & 1) != 0) +
              param_3;
    uVar3 = (unsigned __int64)uStack_3c;
    uVar2 = (unsigned __int64)uStack_40;
    if ((int)(uStack_40 - (int)param_1 & 0xfffffff8) < (int)((int)param_2 - uStack_3c & 0xfffffff8))
    {
      fn_828C9AC8(param_1,uVar2,param_3);
      param_1 = uVar3;
      uVar2 = param_2;
    }
    else {
      fn_828C9AC8(uVar3,param_2,param_3);
    }
    iVar1 = (int)uVar2 - (int)param_1;
    param_2 = uVar2;
  } while( true );
}

