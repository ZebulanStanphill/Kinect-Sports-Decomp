extern int fn_82A4D3F0();
extern int fn_82A5DD00();
extern unsigned int lbl_82089EAC;
extern unsigned int lbl_82089EC0;


void fn_82A4D4C0(unsigned int *param_1)

{
  *param_1 = &lbl_82089EC0;
  param_1[8] = &lbl_82089EAC;
  fn_82A4D3F0();
  fn_82A5DD00(param_1);
  return;
}

