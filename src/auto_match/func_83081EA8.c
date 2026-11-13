extern unsigned int *auStack_40;
extern int fn_82CE5410();


int fn_83081EA8(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar6;
  int *piVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned int auStack_40 [16];
  
  piVar5 = (int *)*param_2;
  uVar1 = param_2[1];
  uVar11 = (unsigned __int64)uVar1;
  iVar10 = 0;
  iVar8 = 1;
  iVar4 = *piVar5;
  if ((int)uVar1 < 2) {
    return 0;
  }
  lVar6 = uVar11 - 1;
  do {
    piVar5 = piVar5 + 1;
    if (iVar4 < *piVar5) {
      iVar4 = *piVar5;
      iVar10 = iVar8;
    }
    iVar8 = iVar8 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (iVar10 == 0) {
    return 0;
  }
  auStack_40[0] = uVar1;
  if (uVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    iVar4 = fn_82CE5410();
    piVar5 = (int *)(**(int (***)())(**(int **)(iVar4 + 0xc) + 0xc))
                              (*(int **)(iVar4 + 0xc),auStack_40,4);
    uVar9 = auStack_40[0];
    if (auStack_40[0] != 0) goto LAB_83081f5c;
  }
  uVar9 = 0x80000000;
LAB_83081f5c:
  iVar4 = 0;
  if (0 < (int)uVar1) {
    piVar7 = piVar5 + -1;
    do {
      piVar7 = piVar7 + 1;
      *piVar7 = iVar4;
      iVar4 = iVar4 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *piVar5 = iVar10;
  iVar4 = 0;
  piVar5[iVar10] = 0;
  puVar2 = (unsigned int *)*param_2;
  uVar3 = puVar2[iVar10];
  puVar2[iVar10] = *puVar2;
  *(unsigned int *)*param_2 = uVar3;
  if (0 < (int)param_1[1]) {
    iVar8 = 0;
    do {
      iVar4 = iVar4 + 1;
      piVar7 = (int *)(*(int *)*param_1 + iVar8);
      iVar8 = iVar8 + 4;
      *piVar7 = piVar5[*piVar7];
    } while (iVar4 < (int)param_1[1]);
  }
  iVar4 = fn_82CE5410();
  if ((uVar9 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),piVar5,uVar9 & 0x3fffffff,4);
    return iVar10;
  }
  return iVar10;
}

