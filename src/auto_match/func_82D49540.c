void fn_82D49540(char *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  
  uVar1 = (param_4 & 0xffffffff) * 0x8421085 >> 0x20;
  uVar1 = ((param_4 - uVar1 & 0xffffffff) >> 1) + uVar1 >> 4;
  *param_1 = '\x01' - ((1 << ((int)param_4 - ((int)(uVar1 << 5) - (int)uVar1) & 0x3fU) &
                       *(unsigned int *)((int)(((param_4 & 0xffffffff) / 0x1f + (unsigned __int64)*param_3 + 1 &
                                       0xffffffff) << 2) + (int)param_3)) == 0);
  return;
}

