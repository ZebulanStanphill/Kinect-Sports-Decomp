extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D52258(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  
  if (param_2 == 6) {
    iVar2 = fn_82CE5410();
    piVar1 = *(int **)(iVar2 + 0x10);
    *(unsigned int *)(param_1 + 0x28) = 0;
    if ((*(unsigned int *)(param_1 + 0x2c) & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))
                (piVar1,*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff,2);
    }
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0x80000000;
  }
  else {
    lVar4 = (__int64)(*(int *)(*(int *)(param_1 + 0x18) + 0x14) * 2 + -2) *
            (__int64)(*(int *)(*(int *)(param_1 + 0x18) + 0x10) + -1);
    iVar2 = fn_82CE5410();
    iVar5 = (int)lVar4;
    if ((int)(*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) < iVar5) {
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0x24,lVar4,2);
    }
    iVar2 = fn_82CE5410();
    if ((int)(*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) < iVar5) {
      lVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) << 1;
      if ((int)lVar3 <= iVar5) {
        lVar3 = lVar4;
      }
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0x24,lVar3,2);
    }
    *(int *)(param_1 + 0x28) = iVar5;
  }
  return;
}

