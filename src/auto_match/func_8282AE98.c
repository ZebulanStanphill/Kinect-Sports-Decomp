void fn_8282AE98(int param_1,int param_2)

{
  if (*(unsigned int *)(param_2 + 0x14) == 0) {
    return;
  }
  *(unsigned int *)(param_2 + 0x14) =
       *(unsigned int *)(*(int *)(param_2 + 0x14) * 4 + *(int *)(param_1 + 0x3d4) + -4);
  *(unsigned int *)(param_2 + 0x18) =
       *(unsigned int *)(*(int *)(param_2 + 0x18) * 4 + *(int *)(param_1 + 0x3d4) + -4);
  return;
}

