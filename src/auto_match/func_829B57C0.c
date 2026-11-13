extern int fn_829B54F8();
extern int fn_829B56E8();


void fn_829B57C0(int param_1)

{
  fn_829B54F8();
  fn_829B56E8(param_1);
  ((int (*)())**(unsigned int **)(param_1 + 0x1c0))(param_1);
  ((int (*)())**(unsigned int **)(param_1 + 0x1b0))(param_1);
  **(unsigned int **)(param_1 + 0x1b8) = *(unsigned int *)(*(int *)(param_1 + 0x1b0) + 4);
  return;
}

