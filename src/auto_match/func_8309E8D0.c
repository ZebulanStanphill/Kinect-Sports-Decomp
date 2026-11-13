void fn_8309E8D0(int param_1,unsigned int *param_2)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  *param_2 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc4) + 0x10);
  param_2[1] = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc4) + 0x70);
  param_2[2] = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc4) + 0xd0);
  param_2[3] = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc4) + 0x130);
  return;
}

