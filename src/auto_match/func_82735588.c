extern int fn_8267BE38();
extern int fn_82735448();


void fn_82735588(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x90) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x90));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x90));
  }
  fn_82735448(param_1);
  return;
}

