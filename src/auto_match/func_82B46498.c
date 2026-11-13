void fn_82B46498(int param_1,int param_2)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 4);
  if ((*(unsigned int *)(param_2 + 8) & 1) == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x28) & 0xdfffffff;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x28) | 0x20000000;
  }
  *(unsigned int *)(param_1 + 0x28) = uVar1;
  if ((*(unsigned int *)(param_2 + 8) & 2) == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x28) & 0xfffffffd;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x28) | 2;
  }
  *(unsigned int *)(param_1 + 0x28) = uVar1;
  return;
}

