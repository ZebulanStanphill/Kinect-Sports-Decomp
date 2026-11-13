void fn_8266F640(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 0xb0) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0xa8) = param_2;
  return;
}

