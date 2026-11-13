void fn_8282B920(int param_1,int param_2)

{
  if (*(unsigned int *)(param_2 + 0x10) == 0) {
    return;
  }
  *(unsigned int *)(param_2 + 0x10) =
       *(unsigned int *)(*(int *)(param_2 + 0x10) * 4 + *(int *)(param_1 + 0x3d4) + -4);
  return;
}

