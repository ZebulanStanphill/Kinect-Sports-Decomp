extern int fn_82FF8528();
extern int fn_8300ECA0();
extern unsigned int lbl_8217BCF8;
extern unsigned int lbl_8217D040;


void fn_82FF9C38(unsigned int *param_1)

{
  *param_1 = &lbl_8217BCF8;
  fn_8300ECA0(param_1 + 0x129);
  fn_82FF8528(param_1 + 1);
  *param_1 = &lbl_8217D040;
  return;
}

