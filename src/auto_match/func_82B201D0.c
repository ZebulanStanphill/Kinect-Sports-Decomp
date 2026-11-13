void fn_82B201D0(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  
  if (param_3 < 0x10) {
    iVar1 = ((param_3 >> 5) + 0x15) * 4;
    *(unsigned int *)(iVar1 + param_2) = 1 << (param_3 & 0x1f) | *(unsigned int *)(iVar1 + param_2);
    return;
  }
  *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(param_2 + 0x30) | 0x40000000;
  return;
}

