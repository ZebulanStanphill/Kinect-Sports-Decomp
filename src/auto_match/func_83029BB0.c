unsigned __int64 fn_83029BB0(int param_1)

{
  unsigned int uVar1;
  unsigned short uVar2;
  
  uVar2 = *(short *)(param_1 + 0x14) + 1;
  *(unsigned short *)(param_1 + 0x14) = uVar2;
  uVar1 = *(unsigned int *)(param_1 + 0x1c) & 2;
  if (*(unsigned short *)(param_1 + 0x16) <= uVar2) {
    if (uVar1 != 0) {
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 8);
    }
    *(unsigned short *)(param_1 + 0x14) = 0;
    return 1;
  }
  if (uVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x10;
  return 0;
}

