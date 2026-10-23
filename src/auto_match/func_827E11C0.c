extern int fn_827E0508();
extern int fn_827E0EA8();

int *fn_827E11C0(int *param_1, int param_2)
{
  int node;
  fn_827E0508(param_2 + 4, **(int **)(param_2 + 4));
  node = **(int **)(param_2 + 4);
  fn_827E0EA8(param_1, param_2, node + 8, node);
  return param_1;
}
