void fn_829CAD30(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  if (param_2 != (unsigned int *)0x0) {
    if (*(unsigned int *)(param_1 + 300) == 0) {
      *(unsigned int *)(param_1 + 300) = *(unsigned int *)(param_1 + 0x15c) * 8 + param_1 + 0x13c;
    }
    **(unsigned int **)(param_1 + 300) = *param_2;
    *(unsigned int *)(*(unsigned int *)(param_1 + 300) + 4) = param_2[1];
  }
  if (param_3 == (unsigned int *)0x0) {
    return;
  }
  if (*(unsigned int *)(param_1 + 0x130) == 0) {
    *(unsigned int *)(param_1 + 0x130) = *(unsigned int *)(param_1 + 0x160) * 8 + param_1 + 0x14c;
  }
  **(unsigned int **)(param_1 + 0x130) = *param_3;
  *(unsigned int *)(*(unsigned int *)(param_1 + 0x130) + 4) = param_3[1];
  return;
}

