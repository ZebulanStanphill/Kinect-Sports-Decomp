unsigned __int64 fn_8286CA20(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  *(unsigned int *)(param_1 + 8) = *param_2;
  *(unsigned int *)(param_1 + 0xc) = param_2[1];
  *(unsigned int *)(param_1 + 0x10) = param_2[2];
  *(unsigned int *)(param_1 + 0x14) = *param_3;
  *(unsigned int *)(param_1 + 0x18) = param_3[1];
  *(unsigned int *)(param_1 + 0x1c) = param_3[2];
  *(unsigned char *)(param_1 + 4) = 1;
  return 0x20300000;
}

