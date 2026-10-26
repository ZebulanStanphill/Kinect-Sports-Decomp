extern int fn_82BF3B08(int);

void fn_82BFB4A8(int param_1)
{
  *(int *)(param_1 + 8) = (fn_82BF3B08(*(int *)(param_1 + 0xc)) == 0) + 1;
}
