extern int fn_82F3E1E0();
extern int fn_82F3E338();
extern unsigned int lbl_82162E78;
extern unsigned int lbl_82162E90;


void fn_82F3E698(unsigned int *param_1)

{
  *param_1 = &lbl_82162E90;
  param_1[1] = &lbl_82162E78;
  if (param_1[3] != 0) {
    fn_82F3E1E0(param_1 + 1);
  }
  fn_82F3E338(param_1);
  return;
}

