extern int fn_826A98D8(int, int *, int);
int fn_826F5BA0(int param_1, int *param_2)
{
  if (*(unsigned int *)(param_1 + 0x68) == 0 || *(unsigned int *)(*param_2 + 0x10) == 0) {
    return 0;
  }
  return fn_826A98D8((*(int (**)(int))(**(int **)(param_1 + 0x68) + 0x5c))(*(int *)(param_1 + 0x68)), param_2, 0);
}
