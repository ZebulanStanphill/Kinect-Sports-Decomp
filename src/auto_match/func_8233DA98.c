extern int fn_822CA390();
extern int fn_82670C10();
extern unsigned int lbl_821B1618;
extern unsigned int lbl_821B166C;


void fn_8233DA98(unsigned int *param_1)

{
  *param_1 = &lbl_821B1618;
  param_1[0x1a] = &lbl_821B166C;
  fn_82670C10(param_1 + 0x30);
  fn_822CA390(param_1);
  return;
}

