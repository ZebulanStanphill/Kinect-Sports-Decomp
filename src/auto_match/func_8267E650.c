unsigned __int64 fn_8267E650(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  return (-uVar1 & ~uVar1 & 0xffffffff) >> 0x1f;
}

