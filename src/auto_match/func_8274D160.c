extern int fn_8267BE38();
extern int fn_8274CE78();


void fn_8274D160(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x54) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x54));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x54));
  }
  fn_8274CE78(param_1);
  return;
}

