unsigned __int64 fn_8281C540(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar2 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x58);
    *(unsigned int **)(param_1 + 0x20) = puVar2;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      return 1;
    }
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0x20) + 0x14);
    *(unsigned int **)(param_1 + 0x20) = puVar2;
    if (1 < ((int)puVar2 + (-0x58 - *(int *)(*(int *)(param_1 + 0xc) + 0x1c))) / 0x14) {
      return 0;
    }
  }
  uVar1 = *puVar2;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x24) = uVar1;
  return 1;
}

