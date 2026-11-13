extern int fn_8267BE38();
extern int fn_826C1328();
extern int fn_82711F20();


void fn_82713790(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x5c) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x5c));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x5c));
  }
  fn_82711F20(param_1 + 0x38,0);
  fn_826C1328(param_1);
  return;
}

