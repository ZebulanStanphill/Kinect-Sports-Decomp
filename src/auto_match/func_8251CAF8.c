extern int (*lbl_83265A14)();
extern unsigned int lbl_83274690;
extern unsigned int lbl_8329615C;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296190;
extern int (*lbl_832961B8)();


void fn_8251CAF8(void)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = &lbl_8329615C;
  lbl_83296190 = lbl_8329618C;
  piVar4 = lbl_8329618C;
  do {
    if (*piVar5 != 0) {
      lbl_8329618C = piVar5 + -1;
      if ((piVar4 == piVar5 + -1) || (piVar5[2] != 0)) {
        iVar1 = *piVar5;
        *(unsigned int *)(iVar1 + 0x40) = (unsigned int)LZCOUNT(*(unsigned int *)(iVar1 + 0x40)) >> 5;
        piVar4 = lbl_83296190;
        if (*(int *)(iVar1 + 0x10) == 1) {
          iVar2 = *(int *)(iVar1 + 0x24);
          if ((iVar2 < 1) || (3 < iVar2)) {
            uVar3 = 0;
          }
          else {
            uVar3 = (unsigned int)LZCOUNT((unsigned int)LZCOUNT(*(int *)((iVar2 + 4) * 4 + iVar1) + -1) >> 5) >> 5;
          }
          if (uVar3 == 0) {
            uVar3 = *(int *)(iVar1 + 0x44) + 1;
            *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x44);
            *(unsigned int *)(iVar1 + 0x44) =
                 uVar3 + (((int)uVar3 >> 2) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 3) != 0)) * -4;
            piVar4 = lbl_83296190;
          }
        }
      }
      if (piVar4 == piVar5 + -1) {
        *(unsigned int *)(*(int *)(*piVar5 + 0x408) + 0x800) = 0;
        lbl_83274690 = 0;
        piVar4 = lbl_83296190;
        if (lbl_83265A14 != (int (**)())0x0) {
          (*lbl_83265A14)();
          piVar4 = lbl_83296190;
        }
      }
    }
    piVar5 = piVar5 + -0xc;
  } while (-0x7cd69f35 < (int)piVar5);
  lbl_8329618C = piVar4;
  if (lbl_832961B8 != (int (**)())0x0) {
    (*lbl_832961B8)(piVar4[1]);
  }
  return;
}

