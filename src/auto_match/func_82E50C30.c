extern int fn_82A2A580();


int fn_82E50C30(int param_1)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  RtlInitializeCriticalSectionAndSpinCount(param_1,0);
  uVar1 = fn_82A2A580(0,0,0x7fffffff,0);
  *(unsigned int *)(param_1 + 0x1c) = uVar1;
  uVar1 = fn_82A2A580(0,0,0x7fffffff,0);
  *(unsigned int *)(param_1 + 0x20) = uVar1;
  return param_1;
}

