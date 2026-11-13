extern int fn_8267BE38();
extern int fn_826C1328();
extern int fn_82711F20();


void fn_8273D2F8(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x54) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x54));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x54));
  }
  fn_82711F20(param_1 + 0x30,0);
  fn_82711F20(param_1 + 0x34,0);
  fn_826C1328(param_1);
  return;
}

