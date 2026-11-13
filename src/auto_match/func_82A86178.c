extern unsigned int *auStack_30;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A84FA0();
extern int fn_82A85FD0();
extern unsigned int lbl_832234E4;


unsigned __int64 fn_82A86178(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_30 [12];
  
  if (lbl_832234E4 == 0) {
    uVar1 = 0;
    auStack_30[0] = 0;
    uVar2 = fn_8265C940(0x1100,0x20980000);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82A84FA0(uVar2,param_1,auStack_30);
      uVar1 = (unsigned __int64)auStack_30[0];
    }
    if ((uVar2 & 0xffffffff) == 0) {
      uVar1 = 0xffffffff8007000e;
    }
    else if ((int)uVar1 < 0) {
      fn_82A85FD0(uVar2);
      fn_8265C990(uVar2,0x20980000);
      uVar2 = 0;
    }
    lbl_832234E4 = (int)uVar2;
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

