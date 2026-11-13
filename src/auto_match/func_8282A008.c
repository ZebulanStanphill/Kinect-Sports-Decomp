void fn_8282A008(int param_1,int param_2)

{
  if (*(unsigned int *)(param_2 + 0x14) == 0) {
    return;
  }
  *(unsigned int *)(param_2 + 0x14) =
       *(unsigned int *)(*(int *)(param_2 + 0x14) * 4 + *(int *)(param_1 + 0x3d4) + -4);
  return;
}

