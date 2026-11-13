void fn_82D7BEC0(int param_1)

{
  unsigned short uVar1;
  
  uVar1 = *(unsigned short *)(param_1 + 6);
  *(int *)((unsigned int)*(unsigned short *)(param_1 + 4) * 8 + *(int *)(*(int *)(param_1 + 0x10) + 0x50)) = param_1
  ;
  *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x50) + (unsigned int)uVar1 * 8) = param_1;
  return;
}

