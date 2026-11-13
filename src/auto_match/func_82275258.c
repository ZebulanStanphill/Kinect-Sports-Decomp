extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


void fn_82275258(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  
  uVar6 = *(unsigned int *)(param_1 + 8);
  if (uVar6 == 0xfffffff) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff821a8018);
  }
  uVar4 = uVar6 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  uVar9 = 1;
  if ((1 < uVar4) && (uVar6 <= 0xfffffff - uVar4)) {
    uVar9 = uVar4;
  }
  uVar6 = uVar6 + uVar9;
  uVar4 = *(unsigned int *)(param_1 + 0xc) >> 2;
  puVar2 = (unsigned int *)0x0;
  if ((uVar6 != 0) &&
     ((0x3fffffff < uVar6 ||
      (puVar2 = (unsigned int *)fn_8265C9E0(uVar6 & 0x3fffffff), puVar2 == (unsigned int *)0x0))))
  {
    uStack_3c = 0;
    ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_40);
  }
  iVar8 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 4);
  puVar5 = puVar2 + uVar4;
  for (puVar7 = (unsigned int *)(uVar4 * 4 + iVar1); puVar7 != (unsigned int *)(iVar8 * 4 + iVar1);
      puVar7 = puVar7 + 1) {
    if (puVar5 != (unsigned int *)0x0) {
      *puVar5 = *puVar7;
    }
    puVar5 = puVar5 + 1;
  }
  puVar7 = *(unsigned int **)(param_1 + 4);
  if (uVar9 < uVar4) {
    puVar3 = puVar7 + uVar9;
    for (; puVar7 != puVar3; puVar7 = puVar7 + 1) {
      if (puVar5 != (unsigned int *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    iVar8 = *(int *)(param_1 + 4);
    puVar5 = puVar2;
    for (puVar7 = (unsigned int *)(uVar9 * 4 + iVar8); uVar6 = uVar9,
        puVar7 != (unsigned int *)(uVar4 * 4 + iVar8); puVar7 = puVar7 + 1) {
      if (puVar5 != (unsigned int *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar5 != (unsigned int *)0x0) {
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
    }
  }
  else {
    puVar3 = puVar7 + uVar4;
    for (; puVar7 != puVar3; puVar7 = puVar7 + 1) {
      if (puVar5 != (unsigned int *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    for (iVar8 = uVar9 - uVar4; puVar7 = puVar2, iVar8 != 0; iVar8 = iVar8 + -1) {
      if (puVar5 != (unsigned int *)0x0) {
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar7 != (unsigned int *)0x0) {
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    fn_8265CA20();
  }
  *(unsigned int **)(param_1 + 4) = puVar2;
  *(unsigned int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar9;
  return;
}

