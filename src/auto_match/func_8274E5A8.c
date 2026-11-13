extern int fn_8267BE38();
extern int fn_826C1328();


void fn_8274E5A8(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x58) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x58));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x58));
  }
  fn_826C1328(param_1);
  return;
}

