void fn_8262BC60(int param_1,int *param_2)

{
  if (*param_2 != 0x44) {
    return;
  }
  if (param_2[2] == *(unsigned int *)(param_1 + 0xe0c8)) {
    *(unsigned int *)(param_1 + 0xe0c8) = 0;
  }
  if (param_2[2] != *(unsigned int *)(param_1 + 0xe100)) {
    return;
  }
  *(unsigned int *)(param_1 + 0xe100) = 0;
  return;
}

