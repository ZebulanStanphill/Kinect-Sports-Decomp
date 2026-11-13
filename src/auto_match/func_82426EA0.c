typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82415090();


__int64 fn_82426EA0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned int uVar7;
  
  lVar6 = 0;
  uVar7 = 0;
  do {
    lVar5 = fn_82415090(*(unsigned int *)(uVar7 + *(int *)(param_1 + 4)));
    uVar7 = uVar7 + 4;
    lVar6 = lVar5 + lVar6;
  } while (uVar7 < 0x28);
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x24) + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x20);
  if (puVar1 == (unsigned int *)0x0) {
    piVar3 = *(int **)(iVar2 + 4);
    if ((piVar3 == (int *)0x0) || (bVar4 = true, *piVar3 != 10)) {
      bVar4 = false;
    }
    if (bVar4) {
      piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 4);
      if ((piVar3 == (int *)0x0) || (bVar4 = true, *piVar3 != 10)) {
        bVar4 = false;
      }
      if (!bVar4) {
        return lVar6 + 10;
      }
      return lVar6 + 0x1e;
    }
    if (((piVar3 == (int *)0x0) || (*(int **)(iVar2 + 8) == (int *)0x0)) ||
       (bVar4 = true, **(int **)(iVar2 + 8) + *piVar3 != 10)) {
      bVar4 = false;
    }
    if (!bVar4) {
      return lVar6;
    }
  }
  else {
    piVar3 = *(int **)(*(int *)(param_1 + 0x24) + 8);
    if (piVar3 == (int *)0x0) {
      lVar6 = (unsigned __int64)*puVar1 + lVar6;
      if ((*(int **)(iVar2 + 4) == (int *)0x0) || (bVar4 = true, **(int **)(iVar2 + 4) != 10)) {
        bVar4 = false;
      }
      if (!bVar4) {
        return lVar6;
      }
      return (unsigned __int64)*puVar1 + lVar6 + 10;
    }
    if (piVar3[2] != 0) {
      return lVar6;
    }
    if ((*puVar1 == 10) && (*piVar3 == 10)) {
      return lVar6 + 0x14;
    }
  }
  return lVar6 + 10;
}

