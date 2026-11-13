typedef unsigned char bool;
extern int fn_822ABA88();
extern int fn_82372F88();
extern int fn_82375CA8();


void fn_82375B78(int param_1)

{
  bool bVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x204) == 0) {
    lVar2 = fn_82372F88();
    iVar6 = (int)(lVar2 + 1) - ((int)lVar2 + (unsigned int)(lVar2 + 1 == 0));
  }
  else {
    iVar6 = *(int *)(param_1 + 0x658);
  }
  if (iVar6 == 0) {
    *(unsigned int *)(param_1 + 0x348) = 1;
    bVar1 = *(int *)(param_1 + 0x1e4) == 0;
    *(unsigned int *)(param_1 + 0x1e4) = (unsigned int)bVar1;
    if (!bVar1) {
      iVar6 = 1 - *(int *)(param_1 + 0x1e8);
      *(int *)(param_1 + 0x1e8) = iVar6;
      piVar5 = *(int **)(**(int **)(param_1 + 8) + (unsigned int)bVar1 * 4);
      if (1 < *(unsigned int *)(*(int *)(piVar5[4] * 4 + *piVar5) + 8)) {
        iVar3 = fn_822ABA88(*(unsigned int *)(piVar5[4] * 4 + *piVar5),0);
        iVar4 = fn_822ABA88(*(unsigned int *)(piVar5[4] * 4 + *piVar5),1);
        if ((*(int *)(iVar3 + 0x24) != 0) != (*(int *)(iVar4 + 0x24) != 0)) {
          if ((unsigned int)LZCOUNT(iVar6) >> 5 != *(unsigned int *)(iVar3 + 0x2a4)) {
            fn_82375CA8(param_1,*(unsigned int *)(iVar3 + 0x2c),1);
          }
        }
      }
    }
    *(unsigned int *)(param_1 + 0x1ec) = *(unsigned int *)(*(int *)(param_1 + 0x260) + 0x160);
  }
  return;
}

