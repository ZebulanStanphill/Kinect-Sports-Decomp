extern int fn_826824B0();
extern int fn_82696330();
extern int fn_826A9040();
extern unsigned int lbl_8200612C;
extern unsigned int lbl_82007798;


void fn_826AFAA8(unsigned int *param_1)

{
  *param_1 = &lbl_82007798;
  fn_82696330(param_1 + 0xe);
  fn_82696330(param_1 + 10);
  if (param_1[5] != 0) {
    fn_826824B0(param_1[5]);
  }
  fn_826A9040(param_1 + 4);
  *param_1 = &lbl_8200612C;
  return;
}

