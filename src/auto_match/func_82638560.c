void fn_82638560(int param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  
  *(unsigned int *)(param_1 + 0x28b4) = -(unsigned int)(param_2 != 0) & 0x1000;
  *(unsigned int *)(param_1 + 0x2944) = *(unsigned int *)(param_1 + 0x2944) & 0xffffffc0 | (unsigned int)param_2;
  uVar1 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x80;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x100000000080;
  return;
}

