void fn_8266F628(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 0xb4) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0xac) = param_2;
  return;
}

