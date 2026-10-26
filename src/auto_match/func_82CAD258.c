extern void fn_82C563B0(int a, void *b);

void fn_82CAD258(int param_1, void **param_2)
{
  if ((*param_2 != 0) && (*(int *)(param_1 + 8) == 0)) {
    fn_82C563B0(*(int *)(param_1 + 0x6070) + 8, *param_2);
    *param_2 = 0;
  }
}
