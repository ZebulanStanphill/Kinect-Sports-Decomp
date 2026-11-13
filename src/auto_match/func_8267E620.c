unsigned __int64 fn_8267E620(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 4) - (unsigned __int64)*(unsigned int *)(param_1 + 8);
  return (-uVar1 & ~uVar1 & 0xffffffff) >> 0x1f;
}

