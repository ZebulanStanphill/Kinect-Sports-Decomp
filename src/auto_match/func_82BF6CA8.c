extern void fn_82BF6BC0(int, unsigned int);

void fn_82BF6CA8(int param_1)
{
  while (*(unsigned int *)(param_1 + 8) != 0) {
    fn_82BF6BC0(param_1, *(unsigned int *)(param_1 + 8));
  }
}
