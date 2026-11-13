unsigned __int64
fn_8286C9C8(int param_1,unsigned char param_2,unsigned int *param_3,unsigned char param_4,
             unsigned int *param_5)

{
  *(unsigned char *)(param_1 + 0x20) = param_2;
  *(unsigned int *)(param_1 + 0x24) = *param_3;
  *(unsigned int *)(param_1 + 0x28) = param_3[1];
  *(unsigned int *)(param_1 + 0x2c) = param_3[2];
  *(unsigned char *)(param_1 + 0x30) = param_4;
  *(unsigned int *)(param_1 + 0x34) = *param_5;
  *(unsigned int *)(param_1 + 0x38) = param_5[1];
  *(unsigned int *)(param_1 + 0x3c) = param_5[2];
  return 0x20300000;
}

