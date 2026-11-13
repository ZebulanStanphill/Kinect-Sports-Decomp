extern int fn_8267BE38();
extern int fn_826C1328();
extern int fn_826CC360();


void fn_82714B50(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x50) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x50));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x50));
  }
  fn_826CC360(param_1 + 0x30,0);
  fn_826C1328(param_1);
  return;
}

