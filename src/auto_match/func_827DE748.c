extern int fn_827DE410();
extern int fn_827DE600();

int *fn_827DE748(int *param_1, int param_2)
{
  int node;
  fn_827DE410(param_2 + 4, **(int **)(param_2 + 4));
  node = **(int **)(param_2 + 4);
  fn_827DE600(param_1, param_2, node + 8, node);
  return param_1;
}
