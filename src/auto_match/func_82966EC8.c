unsigned __int64 fn_82966EC8(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  
  uVar2 = 0;
  if ((*(unsigned int *)(param_1 + 0x6c) & 0x10) == 0) {
    if ((*(unsigned int *)(param_1 + 0x6c) & 8) == 0) {
      return uVar2;
    }
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    uVar3 = 0;
    if (uVar1 == 0) {
      return uVar2;
    }
    iVar6 = 0;
    uVar5 = 1;
    do {
      if ((((*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + iVar6) + 0x2c) & 1) != 0) &&
          (uVar2 = uVar2 + 1, uVar5 < uVar1)) &&
         (piVar4 = (int *)(*(int *)(param_1 + 0x18) + iVar6),
         *(int *)(*piVar4 + 0x2c) == *(int *)(piVar4[1] + 0x2c))) {
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      }
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar3 < uVar1);
    return uVar2;
  }
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  if (uVar1 == 0) {
    return uVar2;
  }
  uVar2 = (unsigned __int64)((*(unsigned int *)(**(int **)(param_1 + 0x18) + 0x2c) & 1) == 0);
  uVar3 = 1;
  if (uVar1 < 2) {
    return uVar2;
  }
  iVar6 = 4;
  do {
    if (((*(unsigned int *)(*(int *)(iVar6 + (int)*(int **)(param_1 + 0x18)) + 0x2c) & 1) != 0) &&
       (piVar4 = (int *)(*(int *)(param_1 + 0x18) + iVar6),
       *(int *)(*piVar4 + 0x2c) != *(int *)(piVar4[-1] + 0x2c))) {
      uVar2 = uVar2 + 1;
    }
    uVar3 = uVar3 + 1;
    iVar6 = iVar6 + 4;
  } while (uVar3 < uVar1);
  return uVar2;
}

