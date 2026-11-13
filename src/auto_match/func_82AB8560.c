unsigned int fn_82AB8560(unsigned int param_1,int *param_2)

{
  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = param_1 + 0x10;
    }
    return *(unsigned int *)(param_1 + 8);
  }
  return 0;
}

