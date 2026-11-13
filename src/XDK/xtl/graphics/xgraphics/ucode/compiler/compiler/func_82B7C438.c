typedef unsigned int (*fp_t)(unsigned int);
extern void fn_82F6C420(int, int);

void fn_82B7C438(int param_1)
{
  if ((*(fp_t *)(param_1 + 0x5a0))(*(unsigned int *)(param_1 + 0x5a4)) == 0) {
    *(unsigned int *)(param_1 + 0x554) = 0x10;
    fn_82F6C420(param_1 + 0x10, 1);
  }
}
