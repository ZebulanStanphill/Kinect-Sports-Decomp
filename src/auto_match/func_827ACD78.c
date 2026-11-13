extern int fn_8267BE38();
extern int fn_826C1328();
extern int fn_827A80F8();


void fn_827ACD78(int param_1)

{
  if (*(unsigned int **)(param_1 + 0x5c) != (unsigned int *)0x0) {
    fn_8267BE38(**(unsigned int **)(param_1 + 0x5c));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x5c));
  }
  fn_827A80F8(param_1 + 0x30);
  fn_826C1328(param_1);
  return;
}

