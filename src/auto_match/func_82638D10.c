void fn_82638D10(int param_1,int param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  
  uVar2 = 0x43f;
  if (param_2 == 0) {
    uVar2 = 0x400;
  }
  *(unsigned int *)(param_1 + 0x294c) = uVar2;
  *(unsigned int *)(param_1 + 0x2944) =
       (unsigned int)(param_2 == 0) << 0x10 | *(unsigned int *)(param_1 + 0x2944) & 0xfffeffff;
  uVar1 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x20;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0xa0;
  return;
}

