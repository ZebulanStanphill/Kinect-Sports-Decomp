extern int fn_82A4EBB0();
extern int fn_82A5DD00();
extern unsigned int lbl_82089F20;
extern unsigned int lbl_82089F34;


void fn_82A4ED28(unsigned int *param_1)

{
  *param_1 = &lbl_82089F34;
  param_1[8] = &lbl_82089F20;
  fn_82A4EBB0();
  fn_82A5DD00(param_1);
  return;
}

