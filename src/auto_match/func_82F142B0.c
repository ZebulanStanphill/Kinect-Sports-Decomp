unsigned int fn_82F142B0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(unsigned int *)(param_1 + 0x38);
  }
  if (param_2 == 1) {
    return *(unsigned int *)(param_1 + 0x3c);
  }
  if (param_2 == 2) {
    return *(unsigned int *)(param_1 + 0x40);
  }
  return 0;
}

