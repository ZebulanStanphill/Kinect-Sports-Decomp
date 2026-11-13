void fn_82E68FB0(int param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = param_3;
  uVar3 = *(unsigned int *)(param_1 + 0x10);
  param_2 = param_2 & ~(-1 << uVar2);
  if (uVar3 > uVar2) {
    *(unsigned int *)(param_1 + 0x10) = uVar3 - uVar2;
    *(unsigned int *)(param_1 + 0xc) = param_2 << (uVar3 - uVar2) ^ *(unsigned int *)(param_1 + 0xc);
    return;
  }
  puVar1 = *(unsigned int **)(param_1 + 8);
  *puVar1 = param_2 >> (uVar2 - uVar3) ^ *(unsigned int *)(param_1 + 0xc);
  param_3 = param_3 - *(unsigned int *)(param_1 + 0x10);
  *(unsigned int **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  if (param_3 != 0) {
    uVar3 = 0x20 - param_3;
    *(unsigned int *)(param_1 + 0x10) = uVar3;
    *(unsigned int *)(param_1 + 0xc) = param_2 << uVar3;
    return;
  }
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0x20;
  return;
}

