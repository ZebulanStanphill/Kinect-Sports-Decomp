typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82415090();


__int64 fn_82426D20(int param_1)

{
  bool bVar1;
  int *piVar2;
  __int64 lVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  
  lVar7 = 0;
  uVar6 = 0;
  do {
    lVar3 = fn_82415090(*(unsigned int *)(uVar6 + *(int *)(param_1 + 4)));
    uVar6 = uVar6 + 4;
    lVar7 = lVar3 + lVar7;
  } while (uVar6 < 0x28);
  piVar2 = *(int **)(*(int *)(param_1 + 0x24) + 4);
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x20);
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(iVar5 + 4);
    lVar3 = lVar7 + 0x1e;
    if ((piVar2 == (int *)0x0) || (bVar1 = true, *piVar2 != 10)) {
      bVar1 = false;
    }
    if (bVar1) {
      piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 4);
      lVar7 = lVar7 + 0x3c;
      bVar1 = piVar4 == (int *)0x0;
LAB_82426dac:
      if ((bVar1) || (bVar1 = true, *piVar4 != 10)) {
        bVar1 = false;
      }
      if (bVar1) {
        lVar7 = lVar7 + 0x1e;
      }
      return lVar7;
    }
    if ((piVar2 != (int *)0x0) && (*(int **)(iVar5 + 8) != (int *)0x0)) {
      iVar5 = **(int **)(iVar5 + 8) + *piVar2;
LAB_82426e34:
      bVar1 = true;
      if (iVar5 == 10) goto LAB_82426e44;
    }
  }
  else {
    piVar4 = *(int **)(*(int *)(param_1 + 0x24) + 8);
    if (piVar4 != (int *)0x0) {
      if (piVar4[2] != 0) {
        return lVar7;
      }
      if ((*piVar2 == 10) && (*piVar4 == 10)) {
        return lVar7 + 0x1e;
      }
      return lVar7 + 0x14;
    }
    piVar4 = *(int **)(iVar5 + 4);
    bVar1 = piVar4 == (int *)0x0;
    if (*piVar2 == 10) {
      lVar7 = lVar7 + 0x1e;
      goto LAB_82426dac;
    }
    lVar3 = lVar7 + 0x14;
    if (!bVar1) {
      iVar5 = *piVar4;
      goto LAB_82426e34;
    }
  }
  bVar1 = false;
LAB_82426e44:
  if (!bVar1) {
    return lVar3;
  }
  return lVar3 + 0x14;
}

