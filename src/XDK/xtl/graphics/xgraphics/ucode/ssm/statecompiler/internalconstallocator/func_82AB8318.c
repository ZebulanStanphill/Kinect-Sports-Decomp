unsigned __int64 fn_82AB8318(int param_1,int param_2,unsigned int param_3)

{
  param_1 = param_2 * 0x24 + param_1;
  *(unsigned int *)(param_1 + 0x14) = param_3;
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xff000fff | 0xffe000;
  return 0;
}

