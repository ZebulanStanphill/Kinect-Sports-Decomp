unsigned int fn_827A8738(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if ((unsigned int)param_1[1] <= param_2) {
    return 0;
  }
  uVar1 = *(unsigned int *)(param_2 * 4 + *param_1);
  *(unsigned char *)(param_1 + 0x1d) = *(unsigned char *)(param_1 + 0x1d) | 1;
  return uVar1;
}

