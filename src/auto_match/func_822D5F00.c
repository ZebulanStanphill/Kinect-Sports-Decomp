extern int fn_822D5F28();


void fn_822D5F00(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  if (*(int *)(param_1 + 0xbc) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0xec) = param_2;
  *(unsigned int *)(param_1 + 0xf0) = param_3;
  *(unsigned int *)(param_1 + 0xe8) = 1;
  *(unsigned int *)(param_1 + 0xf4) = param_4;
  fn_822D5F28();
  return;
}
