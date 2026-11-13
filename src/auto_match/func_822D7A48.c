extern int fn_8265CA20();


int fn_822D7A48(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    fn_8265CA20(*(int *)(param_1 + 0x18));
  }
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

