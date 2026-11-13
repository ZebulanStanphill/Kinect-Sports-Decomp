extern int fn_82631578();
extern int fn_82631920();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8320A898;


void fn_825F9C50(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  
  piVar2 = (int *)fn_82F6A540();
  iVar1 = lbl_8320A898;
  if (*piVar2 == 0) {
    uVar4 = 0;
    piVar3 = piVar2 + 5;
    do {
      if (*piVar3 != 0) break;
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar4 < 3);
    if (uVar4 == 3) {
      fn_82F6A58C();
      return;
    }
  }
  *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,piVar2[0x11]);
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,piVar2[0x12]);
}

