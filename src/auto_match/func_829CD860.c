extern unsigned int lbl_832154A8;
extern unsigned int lbl_832154B0;
extern unsigned int lbl_832154D4;
extern unsigned int *lbl_832155B4;
extern unsigned int lbl_832155C4;
extern unsigned int lbl_832155E4;


void fn_829CD860(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (lbl_832154A8 != 0) {
    uVar1 = KfAcquireSpinLock(0xffffffff832155b0);
    if (param_1 == 0) {
      iVar2 = 0x153c32 - lbl_832154B0;
    }
    else {
      iVar2 = (param_1 - lbl_832154B0) + -0x43238;
    }
    if (lbl_832155B4 == (int *)0x0) {
      lbl_832155B4 = (int *)(&lbl_832155C4 + lbl_832155E4 * 8);
    }
    *lbl_832155B4 = param_1;
    lbl_832155B4[1] = iVar2;
    lbl_832154D4 = 1;
    KfReleaseSpinLock(0xffffffff832155b0,uVar1);
  }
  return;
}

