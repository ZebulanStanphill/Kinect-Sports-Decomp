extern int fn_827E0508();
extern int fn_827E0FF0();

int *fn_827E1220(int *param_1, int param_2)
{
  int node;
  fn_827E0508(param_2 + 4, **(int **)(param_2 + 4));
  node = **(int **)(param_2 + 4);
  fn_827E0FF0(param_1, param_2, node + 8, node);
  return param_1;
}
