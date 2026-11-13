void fn_82FB4158(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
  *(unsigned int *)(param_1 + 0x38) = param_3;
  *(unsigned int *)(param_1 + 0x3c) = param_4;
  *(int *)(param_1 + 0x34) = param_5;
  *(unsigned int *)(param_1 + 0x40) = param_2;
  *(unsigned char *)(param_1 + 0x44) = 1;
  if (param_5 >= *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(param_1 + 8) = param_5;
  return;
}

