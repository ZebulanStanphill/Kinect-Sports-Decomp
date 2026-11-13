extern int fn_82549960();
extern int fn_8265C9E0();
extern unsigned int lbl_832767D4;
extern unsigned int lbl_832767E8;


void fn_82525F28(unsigned int *param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  
  if (param_1 != (unsigned int *)0x0) {
    uVar1 = (unsigned __int64)*param_1;
    if ((uVar1 != (uVar1 - 1) + (unsigned __int64)(uVar1 == 0)) && (lbl_832767D4 == 0)) {
      uVar1 = fn_8265C9E0(0x200);
      if ((uVar1 & 0xffffffff) == 0) {
        lbl_832767D4 = 0;
      }
      else {
        lbl_832767D4 = fn_82549960(uVar1,param_1,0,0,0,0);
      }
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    uVar1 = (unsigned __int64)*param_2;
    if ((uVar1 != (uVar1 - 1) + (unsigned __int64)(uVar1 == 0)) && (lbl_832767E8 == 0)) {
      uVar1 = fn_8265C9E0(0x200);
      if ((uVar1 & 0xffffffff) == 0) {
        lbl_832767E8 = 0;
      }
      else {
        lbl_832767E8 = fn_82549960(uVar1,param_2,0,0,0,0);
      }
    }
  }
  return;
}

