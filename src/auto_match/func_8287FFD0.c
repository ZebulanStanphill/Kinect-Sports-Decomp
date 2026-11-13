void fn_8287FFD0(unsigned int *param_1,int param_2)

{
  if (*(unsigned int *)(param_2 + 0x30) != 0) {
    *(unsigned int *)(*(unsigned int *)(param_2 + 0x30) + 0x34) = *(unsigned int *)(param_2 + 0x34);
  }
  if (*(unsigned int *)(param_2 + 0x34) != 0) {
    *(unsigned int *)(*(unsigned int *)(param_2 + 0x34) + 0x30) = *(unsigned int *)(param_2 + 0x30);
  }
  if (*param_1 == param_2) {
    *param_1 = *(unsigned int *)(param_2 + 0x30);
  }
  if (param_1[1] == param_2) {
    param_1[1] = *(unsigned int *)(param_2 + 0x34);
  }
  *(unsigned int *)(param_2 + 0x30) = 0;
  *(unsigned int *)(param_2 + 0x34) = 0;
  param_1[2] = param_1[2] + -1;
  *(unsigned int *)(param_2 + 0x2c) = 0;
  return;
}

