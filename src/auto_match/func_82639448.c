unsigned int fn_82639448(int param_1,int param_2)

{
  unsigned int uVar1;
  
  param_1 = (param_2 + 0x30) * 0x18 + param_1;
  uVar1 = (*(unsigned int *)(param_1 + 0x10) >> 0xb & 1) - 1;
  return ~uVar1 & 4 | *(unsigned int *)(param_1 + 0xc) >> 0x15 & uVar1 & 3;
}

