void start_pass_upsample(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(unsigned int *)(iVar1 + 0x5c) = *(unsigned int *)(param_1 + 0x114);
  *(unsigned int *)(iVar1 + 0x60) = *(unsigned int *)(param_1 + 0x60);
  return;
}

