extern int fn_822B6858();
extern int fn_822C8C08();


void fn_822BE940(int param_1)

{
  fn_822B6858();
  fn_822C8C08(*(unsigned int *)(param_1 + 0x114),"drone");
  *(unsigned int *)(param_1 + 0x7b0) = 0;
  *(unsigned int *)(param_1 + 0x78c) = 0;
  *(unsigned int *)(param_1 + 0x790) = 0;
  *(unsigned int *)(param_1 + 0x7a4) = 0;
  *(unsigned int *)(param_1 + 0x7a0) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x118) + 0x2f4) = 1;
  return;
}

