extern int fn_8267C498();


void fn_82698CC0(unsigned int *param_1,unsigned int param_2)

{
  if (*param_1 != 0) {
    fn_8267C498(*param_1);
  }
  *param_1 = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  return;
}

