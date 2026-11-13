void fn_8284FE58(int param_1,int param_2,unsigned int param_3)

{
  if (*(unsigned int *)(param_1 + 0x90) == 0) {
    return;
  }
  if (*(unsigned int *)(*(unsigned int *)(param_1 + 0x90) + 0x1c) != 0) {
    return;
  }
  *(unsigned int *)(*(unsigned int *)(param_2 + 4) + 0xc) = param_3;
  return;
}

