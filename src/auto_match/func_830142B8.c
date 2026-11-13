void fn_830142B8(int param_1,unsigned int param_2)

{
  *(int *)(param_1 + 0x3c) = param_2;
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
  return;
}

