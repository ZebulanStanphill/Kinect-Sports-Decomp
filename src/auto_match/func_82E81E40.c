void fn_82E81E40(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (0x4d5800 < iVar2) {
    *(unsigned int *)(param_1 + 0x644) = 0;
  }
  if (1 < *(int *)(param_1 + 0x1fa8)) {
    *(unsigned int *)(param_1 + 0x648) = 1;
  }
  *(unsigned int *)(param_1 + 0x76b8) =
       (int)((~param_2 & 0xffffffff) >> 0x1f) + (unsigned int)(param_2 < 0x4d5801) & 1;
  if (0x4d57ff < iVar2) {
    *(unsigned int *)(param_1 + 0x920) = 0;
  }
  if (*(int *)(param_1 + 0x888) != 2) {
    return;
  }
  if (1 < *(int *)(param_1 + 0x1fa8)) {
    uVar1 = (int)((~param_2 & 0xffffffff) >> 0x1f) + (unsigned int)(0x707fff < param_2) & 1;
    *(unsigned int *)(param_1 + 0x62c) = uVar1;
    *(unsigned int *)(param_1 + 0x630) = uVar1;
    return;
  }
  iVar2 = (unsigned int)(param_2 < 0x2e6801) - (iVar2 >> 0x1f);
  *(int *)(param_1 + 0x62c) = iVar2;
  *(int *)(param_1 + 0x630) = iVar2;
  return;
}

