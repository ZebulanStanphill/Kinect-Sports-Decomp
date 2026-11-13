void fn_82464E48(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == 5) {
    *(float *)(param_1 + 0x1c) = 0.0f;
  }
  if (param_2 == 5) {
    *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

