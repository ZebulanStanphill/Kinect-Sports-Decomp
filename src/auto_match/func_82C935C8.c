void fn_82C935C8(int param_1,int param_2)

{
  if (param_2 < 5) {
    *(int *)(param_1 + 0x9b0) = param_1 + 0x9a4;
    *(int *)(param_1 + 0x9d8) = param_1 + 0x9b4;
    *(int *)(param_1 + 0xa00) = param_1 + 0x9dc;
    return;
  }
  if (param_2 < 0xd) {
    *(int *)(param_1 + 0x9b0) = param_1 + 0x998;
    *(int *)(param_1 + 0x9d8) = param_1 + 0x9c0;
    *(int *)(param_1 + 0xa00) = param_1 + 0x9e8;
    return;
  }
  *(int *)(param_1 + 0x9b0) = param_1 + 0x98c;
  *(int *)(param_1 + 0x9d8) = param_1 + 0x9cc;
  *(int *)(param_1 + 0xa00) = param_1 + 0x9f4;
  return;
}

