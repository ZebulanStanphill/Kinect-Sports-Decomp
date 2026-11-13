extern int fn_8267BE38();
extern int fn_82740198();


void fn_827411C0(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x60) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x60));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x60));
  }
  fn_82740198(param_1);
  return;
}

