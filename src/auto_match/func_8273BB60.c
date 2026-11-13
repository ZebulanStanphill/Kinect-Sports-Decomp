extern int fn_8267BE38();
extern int fn_826C1328();


void fn_8273BB60(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x7c) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x7c));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x7c));
  }
  fn_826C1328(param_1);
  return;
}

