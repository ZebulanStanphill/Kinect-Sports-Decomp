void fn_822D6118(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 0xbc) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0xf8) = param_2;
  *(unsigned char *)(param_1 + 0xfc) = 1;
  return;
}

