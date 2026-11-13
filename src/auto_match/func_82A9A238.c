void fn_82A9A238(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x94) = 3;
  if (*(int *)(*(int *)(param_1 + 0x80) + 0x110) != -1) {
    return;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x80) + 0x110) = param_2;
  return;
}

