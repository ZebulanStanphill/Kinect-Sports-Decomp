extern int fn_822D5F28();


void fn_822D5EE0(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 0xbc) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0xe4) = param_2;
  *(unsigned int *)(param_1 + 0xe0) = 1;
  fn_822D5F28();
  return;
}
