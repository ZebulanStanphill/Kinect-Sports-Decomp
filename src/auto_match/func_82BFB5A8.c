extern int fn_82BF3B68(int a);

void fn_82BFB5A8(int param_1)
{
  int r = fn_82BF3B68(*(int *)(param_1 + 0xc));
  *(unsigned int *)(param_1 + 8) = r ? 1 : 2;
}
