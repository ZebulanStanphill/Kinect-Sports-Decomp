extern int fn_826C26B0();
extern int fn_8274E378();
extern unsigned int lbl_82013790;
extern unsigned int lbl_820137E4;
extern unsigned int lbl_82013808;
extern unsigned int lbl_82013810;
extern unsigned int lbl_8201391C;


void fn_8274EB70(unsigned int *param_1)

{
  *param_1 = &lbl_8201391C;
  param_1[4] = &lbl_82013810;
  param_1[0xf] = &lbl_82013808;
  fn_826C26B0(param_1 + 0xf);
  *param_1 = &lbl_820137E4;
  param_1[4] = &lbl_82013790;
  fn_8274E378(param_1);
  return;
}

