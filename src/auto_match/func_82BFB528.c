extern int fn_82D7EA10(int a);

void fn_82BFB528(int param_1)
{
  int r = fn_82D7EA10(*(int *)(param_1 + 0xc));
  *(unsigned int *)(param_1 + 8) = r ? 1 : 2;
}
