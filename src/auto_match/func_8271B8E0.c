extern int fn_8267BE38();
extern int fn_826C1328();
extern int fn_827121D0();


void fn_8271B8E0(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x50) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x50));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x50));
  }
  fn_827121D0(param_1 + 0x30);
  fn_826C1328(param_1);
  return;
}

