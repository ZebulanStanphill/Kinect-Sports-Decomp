unsigned __int64 fn_82AC63D0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (((*(unsigned int *)(param_2 + 0x30) ^ *(unsigned int *)(param_1 + 0x30)) & 0x800000) == 0) {
    uVar1 = *(unsigned int *)(param_2 + 0x4c);
    uVar2 = *(unsigned int *)(param_1 + 0x4c);
    uVar3 = uVar2 >> 0x18 & 1;
    if (uVar3 != (uVar1 >> 0x18 & 1)) {
      return 0;
    }
    if (uVar3 != 0) {
      if (((uVar2 ^ uVar1) & 0x2000000) != 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x6c)) {
        return 0;
      }
      if (((**(unsigned int **)(param_2 + 0x48) ^ **(unsigned int **)(param_1 + 0x48)) & 0x1ffe000) != 0) {
        return 0;
      }
      if (uVar3 != 0) {
        return 1;
      }
    }
    if (((uVar2 & 0x400000) == 0) || (((uVar2 ^ uVar1) & 0x800000) == 0)) {
      return 1;
    }
  }
  return 0;
}

