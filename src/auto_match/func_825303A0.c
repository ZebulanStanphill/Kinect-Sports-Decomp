extern int fn_8265CA20();
extern unsigned int lbl_832967A0;
extern unsigned int lbl_832967A4;
extern unsigned int lbl_832967A8;
extern unsigned int lbl_832967AC;
extern unsigned int lbl_832967B0;


void fn_825303A0(void)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (unsigned __int64)lbl_832967B0;
  while ((uVar2 & 0xffffffff) != 0) {
    uVar2 = uVar2 - 1;
    lbl_832967B0 = (unsigned int)uVar2;
    if (uVar2 == 0) {
      lbl_832967AC = 0;
    }
  }
  iVar1 = lbl_832967A4;
  if (lbl_832967A8 != 0) {
    iVar4 = lbl_832967A8 << 2;
    iVar3 = lbl_832967A8;
    do {
      iVar4 = iVar4 + -4;
      iVar3 = iVar3 + -1;
      if (*(int *)(iVar4 + iVar1) != 0) {
        fn_8265CA20(*(int *)(iVar4 + iVar1));
        iVar1 = lbl_832967A4;
      }
    } while (iVar3 != 0);
  }
  if (iVar1 != 0) {
    fn_8265CA20();
  }
  lbl_832967A8 = 0;
  lbl_832967A4 = 0;
  fn_8265CA20(lbl_832967A0);
  lbl_832967A0 = 0;
  return;
}

