void fn_8275E650(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = *(unsigned int *)(param_1 + 0x3c);
  }
  if (param_3 == (unsigned int *)0x0) {
    return;
  }
  *param_3 = *(unsigned int *)(param_1 + 0x38);
  return;
}

