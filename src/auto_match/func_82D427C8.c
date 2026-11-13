extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D427C8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  __int64 lVar4;
  __int64 lVar6;
  int iVar7;
  
  *(char *)(param_1 + 0xd8) = (char)param_2;
  if (param_2 == 6) {
    iVar2 = fn_82CE5410();
    piVar1 = *(int **)(iVar2 + 0x10);
    *(unsigned int *)(param_1 + 0xd0) = 0;
    if ((*(unsigned int *)(param_1 + 0xd4) & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))
                (piVar1,*(unsigned int *)(param_1 + 0xcc),*(unsigned int *)(param_1 + 0xd4) & 0x3fffffff,2);
    }
    *(unsigned int *)(param_1 + 0xd4) = 0x80000000;
    *(unsigned int *)(param_1 + 0xcc) = 0;
  }
  else {
    lVar6 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      iVar7 = *(int *)(param_1 + 0xb4);
      iVar5 = 0;
      do {
        *(int *)(iVar7 + 0x4c) = (int)lVar6;
        iVar2 = iVar2 + 1;
        iVar3 = iVar5 + *(int *)(param_1 + 0xb4);
        iVar5 = iVar5 + 0x60;
        iVar7 = iVar5 + *(int *)(param_1 + 0xb4);
        lVar6 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x14) + lVar6;
      } while (iVar2 < *(int *)(param_1 + 0xb8));
    }
    iVar2 = fn_82CE5410();
    iVar7 = (int)lVar6;
    if ((int)(*(unsigned int *)(param_1 + 0xd4) & 0x3fffffff) < iVar7) {
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0xcc,lVar6,2);
    }
    iVar2 = fn_82CE5410();
    if ((int)(*(unsigned int *)(param_1 + 0xd4) & 0x3fffffff) < iVar7) {
      lVar4 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xd4) & 0x3fffffff) << 1;
      if ((int)lVar4 <= iVar7) {
        lVar4 = lVar6;
      }
      fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0xcc,lVar4,2);
    }
    *(int *)(param_1 + 0xd0) = iVar7;
  }
  return;
}

