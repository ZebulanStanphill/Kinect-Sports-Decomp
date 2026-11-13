extern int fn_82A4F4E0();
extern int fn_82A5DD00();
extern unsigned int lbl_82089F70;
extern unsigned int lbl_82089F84;


void fn_82A4F980(unsigned int *param_1)

{
  *param_1 = &lbl_82089F84;
  param_1[8] = &lbl_82089F70;
  if (param_1[0xb] != 0) {
    fn_82A4F4E0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  fn_82A5DD00(param_1);
  return;
}

