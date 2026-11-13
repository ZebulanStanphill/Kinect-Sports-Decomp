extern unsigned int lbl_832642E0;


void fn_8300F638(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  
  iVar2 = lbl_832642E0;
  iVar3 = lbl_832642E0 + 4;
  RtlEnterCriticalSection(iVar3);
  iVar4 = iVar2 + 0x20;
  uVar5 = 0;
  piVar6 = *(int **)(iVar2 + 0x20);
  while (piVar6 == (int *)0x0) {
    uVar5 = uVar5 + 1;
    piVar1 = piVar6;
    if (0xc0 < uVar5) goto joined_r0x8300f690;
    piVar6 = *(int **)(uVar5 * 4 + iVar4);
  }
  do {
    piVar1 = (int *)piVar6[2];
    while ((piVar1 == (int *)0x0 && (uVar5 = uVar5 + 1, uVar5 < 0xc1))) {
      piVar1 = *(int **)(uVar5 * 4 + iVar4);
    }
    if ((piVar6[3] & 0x80000000U) != 0) {
      (**(int (***)())(*piVar6 + 8))();
    }
joined_r0x8300f690:
    piVar6 = piVar1;
  } while (piVar6 != (int *)0x0);
  RtlLeaveCriticalSection(iVar3);
  return;
}

