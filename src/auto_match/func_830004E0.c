void fn_830004E0(int param_1,unsigned int param_2,float param_3,float param_4)

{
  if (*(unsigned int *)(param_1 + 100) == 0) {
    return;
  }
  if (param_2 >= *(unsigned int *)(*(int *)(param_1 + 100) + 0x48)) {
    return;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 100) + 0x44) + param_2 * 0x10 + 8) = (float)param_3;
  *(float *)(*(int *)(*(int *)(param_1 + 100) + 0x44) + param_2 * 0x10 + 0xc) = (float)param_4;
  return;
}

