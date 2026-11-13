unsigned __int64 fn_82AB8290(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  
  param_2 = param_2 * 0x24;
  uVar1 = *(unsigned int *)(param_2 + param_1 + 0x10);
  *(unsigned int *)(param_2 + param_1 + 0x10) =
       (1 << (param_3 & 0x3f) & 0xfU) << 0x14 | uVar1 & 0xfff00fff |
       (~(3 << (param_3 << 1 & 0x3e)) << 0xc & uVar1 | (1 << (param_3 << 1 & 0x3e)) << 0xc) &
       0xff000;
  *(unsigned int *)((param_3 + 3) * 8 + param_2 + param_1) = param_5;
  *(unsigned int *)(param_3 * 8 + param_2 + param_1 + 0x14) = param_4;
  return 0;
}

