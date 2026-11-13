extern int fn_8265C990();


void fn_82A5DDA0(int param_1)

{
  *(unsigned int *)(param_1 + 0x18) = 0;
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_8265C990(*(int *)(param_1 + 0xc),0x20970000);
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0x10) = 7;
  *(unsigned int *)(param_1 + 0x14) = 1;
  return;
}

