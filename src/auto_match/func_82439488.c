typedef unsigned char bool;
extern int fn_822ABA88();
extern int fn_8242C410();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82439488(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  bool bVar10;
  
  uVar9 = 0;
  puVar1 = *(unsigned int **)(*(int *)((int)param_1 + 0x40) + 0x208);
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    uVar9 = puVar1[1];
  }
  else if (uVar2 == 1) {
    uVar9 = puVar1[2];
  }
  else if (uVar2 < 3) {
    uVar9 = puVar1[3];
  }
  else if (uVar2 == 3) {
    uVar9 = puVar1[4];
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  lVar7 = 2;
  uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)((int)param_1 + 0x40) + 0x1d8);
  uVar5 = (unsigned __int64)
          (unsigned int)(int)((float)(__int64)((*(int *)(uVar9 + 0xc) + 1) - *(int *)(uVar9 + 8)) *
                      ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
                     (float)(__int64)*(int *)(uVar9 + 8));
  iVar4 = fn_8242C410(uVar8);
  if (2 < iVar4) {
    lVar6 = 8;
    do {
      bVar10 = lVar7 - 2U < uVar5;
      piVar3 = *(int **)(**(int **)((int)uVar8 + 8) + (int)lVar6);
      iVar4 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 4;
      *(unsigned int *)(*(int *)(iVar4 + 0x1a0) + 0x24) = -(unsigned int)bVar10 & 1;
      uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)((int)param_1 + 0x40) + 0x1d8);
      iVar4 = fn_8242C410(uVar8);
    } while ((int)lVar7 < iVar4);
  }
  return;
}

