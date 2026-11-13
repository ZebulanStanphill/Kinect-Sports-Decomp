extern int fn_8267BE38();
extern int fn_826C1328();
extern int fn_82738D70();


void fn_82739448(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x60) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x60));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x60));
  }
  fn_82738D70(param_1 + 0x30);
  fn_826C1328(param_1);
  return;
}

