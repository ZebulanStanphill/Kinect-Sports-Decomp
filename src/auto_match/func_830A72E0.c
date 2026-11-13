void fn_830A72E0(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)(param_1 * 0x40 + param_3);
  param_4 = param_1 * 0x20 + param_4;
  if ((*pbVar1 >> ((unsigned int)((param_2 & 0xffffffff) << 1) & 0x3e) & 3) == 1) {
    *(unsigned int *)((int)((param_2 + 4 & 0xffffffff) << 2) + param_4) =
         *(unsigned int *)(pbVar1 + (int)param_2 * 0x14 + 4);
    return;
  }
  *(unsigned int *)((int)((param_2 + 4 & 0xffffffff) << 2) + param_4) =
       *(unsigned int *)(pbVar1 + (int)param_2 * 0x14 + 8);
  return;
}

