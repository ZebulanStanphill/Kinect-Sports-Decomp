extern int fn_82529320();
extern int fn_82536008();
extern int fn_82536288();


void fn_822C1D58(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_82536008();
    fn_82536288((unsigned int *)(param_1 + 0x34));
    *(unsigned int *)(param_1 + 0x34) = 0;
  }
  fn_82529320(*(unsigned int *)(param_1 + 0x30),0);
  return;
}

