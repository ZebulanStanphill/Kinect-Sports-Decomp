extern int fn_8267BE38();
extern int fn_826A2C40();


void fn_826A4A20(int param_1)

{
  if (*(unsigned int **)(param_1 + 100) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 100));
    fn_8267BE38(*(unsigned int *)(param_1 + 100));
  }
  fn_826A2C40(param_1);
  return;
}

