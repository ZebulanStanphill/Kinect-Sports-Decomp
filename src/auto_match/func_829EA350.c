extern void fn_829E9E18(int);
extern void fn_82A28E60(int, int, void *);
extern int lbl_832179FC;

void fn_829EA350(int param_1)
{
  if (*(void **)(param_1 + 0x14) != 0) {
    fn_82A28E60(*(int *)(lbl_832179FC + 0x8f4cc), 0, *(void **)(param_1 + 0x14));
  }
  *(void **)(param_1 + 0x14) = 0;
  fn_829E9E18(param_1 + 4);
}
