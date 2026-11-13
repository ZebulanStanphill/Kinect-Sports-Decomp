void fn_82FF5670(int param_1,unsigned short *param_2,unsigned short *param_3,unsigned short *param_4,
                  unsigned short *param_5)

{
  *param_2 = (short)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2);
  *param_3 = (short)*(unsigned int *)(param_1 + 4);
  *param_4 = (short)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2);
  *param_5 = (short)*(unsigned int *)(param_1 + 4);
  return;
}

