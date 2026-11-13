unsigned __int64 fn_828FC7D8(int param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(unsigned int *)(param_1 + 0x68);
    if ((unsigned __int64)uVar2 < (unsigned __int64)*(unsigned int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x30) = param_2;
      uVar3 = (**(int (***)())(*piVar1 + 0xc))
                        (piVar1,*(unsigned int *)(param_2 + 0x10),*(unsigned int *)(param_2 + 0x14),
                         ((unsigned __int64)uVar2 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x5c),
                         (unsigned __int64)*(unsigned int *)(param_1 + 0x60) - (unsigned __int64)uVar2);
      if ((int)uVar3 < 0) {
        *(unsigned int *)(param_1 + 0x4c) = 1;
        *(unsigned int *)(param_1 + 0x50) = 1;
      }
      *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_1 + 0x60);
      return uVar3;
    }
  }
  return 0;
}

