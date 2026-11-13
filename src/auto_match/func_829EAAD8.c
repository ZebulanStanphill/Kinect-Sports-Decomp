extern int fn_829E9E18();
extern int fn_82A28E60();
extern unsigned int lbl_832179FC;


void fn_829EAAD8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x14) != 0) {
    fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,*(unsigned int *)(param_1 + 0x14));
  }
  fn_829E9E18(param_1 + 4);
  return;
}

