extern int fn_82A4C958();
extern int fn_82A5DD00();
extern unsigned int lbl_82089DC0;
extern unsigned int lbl_82089DD4;
extern unsigned int lbl_82089DE8;


void fn_82A4CDA8(unsigned int *param_1)

{
  *param_1 = &lbl_82089DE8;
  param_1[8] = &lbl_82089DD4;
  param_1[9] = &lbl_82089DC0;
  fn_82A4C958();
  fn_82A5DD00(param_1);
  return;
}

