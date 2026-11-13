void fn_82CF99C0(unsigned char *param_1,int param_2,unsigned int param_3)

{
  if (param_3 == 0) {
    *(unsigned int *)(param_2 + 0xc) = 0;
    *param_1 = 1;
    return;
  }
  if (*(unsigned int *)(param_2 + 8) > param_3) {
    *param_1 = 0;
    return;
  }
  *(unsigned int *)(param_2 + 0xc) = param_3;
  *param_1 = 1;
  return;
}

