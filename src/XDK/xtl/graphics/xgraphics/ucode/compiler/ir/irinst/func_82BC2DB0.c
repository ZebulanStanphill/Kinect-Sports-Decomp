extern int fn_82BAFA10();
extern int fn_82BBFDD0();


void fn_82BC2DB0(int param_1)

{
  if (*(int *)(param_1 + 0x50) == 0xb) {
    fn_82BAFA10(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x3b8) + 0xab0) + 0xac),param_1);
  }
  *(unsigned int *)(param_1 + 0xe4) = *(unsigned int *)(param_1 + 0xe4) & 0xfffffffe;
  fn_82BBFDD0(param_1);
  return;
}

