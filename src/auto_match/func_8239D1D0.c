extern int fn_822ABA88();
extern int fn_82397F88();


void fn_8239D1D0(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  
  piVar5 = *(int **)(param_1 + 8);
  iVar6 = 0;
  if ((piVar5[1] - *piVar5 & 0xfffffffcU) != 0) {
    iVar7 = 0;
    do {
      uVar8 = 0;
      piVar5 = *(int **)(*piVar5 + iVar7);
      iVar3 = *(int *)(piVar5[4] * 4 + *piVar5);
      if (*(int *)(iVar3 + 8) != 0) {
        do {
          iVar3 = fn_822ABA88(iVar3,uVar8);
          if ((*(int *)(iVar3 + 0x24) == 0) || (iVar4 = fn_82397F88(param_1), iVar4 != 0)) {
            puVar1 = (unsigned int *)(iVar3 + 0x290U & 0xfffffff0);
            uVar9 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            puVar2 = (unsigned int *)(iVar3 + 0x80U & 0xfffffff0);
            *puVar2 = *puVar1;
            puVar2[1] = uVar9;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
          }
          uVar8 = uVar8 + 1;
          iVar3 = *(int *)(piVar5[4] * 4 + *piVar5);
        } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar3 + 8));
      }
      piVar5 = *(int **)(param_1 + 8);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < piVar5[1] - *piVar5 >> 2);
  }
  return;
}

