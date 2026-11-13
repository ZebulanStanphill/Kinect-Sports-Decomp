void fn_825D3A10(int param_1,int *param_2)

{
  if (*param_2 != 0x44) {
    return;
  }
  if (param_2[2] != *(unsigned int *)(param_1 + 0xfc)) {
    return;
  }
  *(unsigned int *)(param_1 + 0xfc) = 0;
  return;
}

