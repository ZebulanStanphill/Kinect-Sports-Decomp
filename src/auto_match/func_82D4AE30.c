extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D4AE30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  __int64 lVar4;
  __int64 lVar6;
  int iVar7;
  
  *(char *)(param_1 + 0x4c) = (char)param_2;
  if (param_2 == 6) {
    iVar2 = fn_82CE5410();
    piVar1 = *(int **)(iVar2 + 0x10);
    *(unsigned int *)(param_1 + 0x44) = 0;
    if ((*(unsigned int *)(param_1 + 0x48) & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))
                (piVar1,*(unsigned int *)(param_1 + 0x40),*(unsigned int *)(param_1 + 0x48) & 0x3fffffff,2);
    }
    *(unsigned int *)(param_1 + 0x48) = 0x80000000;
    *(unsigned int *)(param_1 + 0x40) = 0;
  }
  else {
    lVar6 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar7 = *(int *)(param_1 + 0x34);
      iVar5 = 0;
      do {
        *(int *)(iVar7 + 0x34) = (int)lVar6;
        iVar2 = iVar2 + 1;
        iVar3 = iVar5 + *(int *)(param_1 + 0x34);
        iVar5 = iVar5 + 0x38;
        iVar7 = iVar5 + *(int *)(param_1 + 0x34);
        lVar6 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x1c) + lVar6;
      } while (iVar2 < *(int *)(param_1 + 0x38));
    }
    iVar2 = fn_82CE5410();
    iVar7 = (int)lVar6;
    if ((int)(*(unsigned int *)(param_1 + 0x48) & 0x3fffffff) < iVar7) {
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0x40,lVar6,2);
    }
    iVar2 = fn_82CE5410();
    if ((int)(*(unsigned int *)(param_1 + 0x48) & 0x3fffffff) < iVar7) {
      lVar4 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x48) & 0x3fffffff) << 1;
      if ((int)lVar4 <= iVar7) {
        lVar4 = lVar6;
      }
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0x40,lVar4,2);
    }
    *(int *)(param_1 + 0x44) = iVar7;
  }
  return;
}

