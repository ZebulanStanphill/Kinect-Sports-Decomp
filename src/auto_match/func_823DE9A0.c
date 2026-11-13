typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_824CCD80();
extern int fn_825603C8();
extern int fn_825604A0();
extern unsigned int lbl_832975B0;


void fn_823DE9A0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar5;
  int iVar8;
  int *piVar9;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(unsigned int *)(*(int *)(iVar1 + 0x4bc) + 0xc);
  uVar3 = *(unsigned int *)(*(int *)(iVar1 + 0x4bc) + 0x90);
  if (uVar3 < uVar2) {
    iVar8 = 0;
  }
  else {
    if (uVar3 <= uVar2) {
      return;
    }
    iVar8 = 1;
  }
  iVar6 = fn_8225F160();
  iVar6 = *(int *)(iVar6 + 8);
  iVar7 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar7 = fn_82250A18();
  }
  if (*(char *)(iVar7 + 4) == '\0') {
    if (iVar6 == 1) {
      for (piVar9 = *(int **)(iVar1 + 0x30); piVar9 != *(int **)(iVar1 + 0x34); piVar9 = piVar9 + 2)
      {
        iVar6 = *piVar9;
        if ((*(int *)(*(int *)(iVar6 + 0x10) + 0x2c) != iVar8) && (*(int *)(iVar6 + 0x22c) != 0)) {
          fn_825604A0(iVar6 + 0x20);
          *(unsigned int *)(iVar6 + 0x22c) = 0;
        }
      }
    }
  }
  else {
    bVar4 = false;
    for (piVar9 = *(int **)(iVar1 + 0x30); piVar9 != *(int **)(iVar1 + 0x34); piVar9 = piVar9 + 2) {
      iVar6 = *piVar9;
      if ((*(int *)(*(int *)(iVar6 + 0x10) + 0x2c) != iVar8) || (bVar4)) {
        if (*(int *)(iVar6 + 0x22c) != 0) {
          fn_825604A0(iVar6 + 0x20);
          *(unsigned int *)(iVar6 + 0x22c) = 0;
        }
      }
      else {
        if (*(int *)(iVar6 + 0x22c) != 1) {
          uVar5 = fn_824CCD80(*(unsigned int *)(iVar6 + 0x10));
          fn_825603C8(uVar5,iVar6 + 0x20,1);
          *(unsigned int *)(iVar6 + 0x22c) = 1;
        }
        bVar4 = true;
      }
    }
  }
  return;
}

