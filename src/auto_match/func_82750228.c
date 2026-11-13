extern int fn_826C26B0();
extern int fn_8274E378();
extern unsigned int lbl_82013998;
extern unsigned int lbl_820139EC;
extern unsigned int lbl_82013A10;
extern unsigned int lbl_82013A18;
extern unsigned int lbl_82013A6C;


void fn_82750228(unsigned int *param_1)

{
  *param_1 = &lbl_82013A6C;
  param_1[4] = &lbl_82013A18;
  param_1[0xf] = &lbl_82013A10;
  fn_826C26B0(param_1 + 0xf);
  *param_1 = &lbl_820139EC;
  param_1[4] = &lbl_82013998;
  fn_8274E378(param_1);
  return;
}

