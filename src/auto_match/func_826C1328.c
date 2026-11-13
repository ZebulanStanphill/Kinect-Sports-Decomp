extern int fn_8267BE38();
extern int fn_826A9040();
extern int fn_826BE288();


void fn_826C1328(int param_1)

{
  fn_826A9040(param_1 + 0x18);
  if (*(unsigned int *)(param_1 + 0x28) != 0) {
    fn_826BE288(*(unsigned int *)(param_1 + 0x28));
    fn_8267BE38(*(unsigned int *)(param_1 + 0x28));
  }
  return;
}

