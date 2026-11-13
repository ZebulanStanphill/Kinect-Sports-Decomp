extern int fn_826C26B0();
extern int fn_8274E378();
extern unsigned int lbl_82013B58;
extern unsigned int lbl_82013BAC;
extern unsigned int lbl_82013BD0;
extern unsigned int lbl_82013BD4;
extern unsigned int lbl_82013C30;


void fn_82751520(unsigned int *param_1)

{
  *param_1 = &lbl_82013BD4;
  param_1[4] = &lbl_82013C30;
  param_1[0xf] = &lbl_82013BD0;
  fn_826C26B0(param_1 + 0xf);
  *param_1 = &lbl_82013BAC;
  param_1[4] = &lbl_82013B58;
  fn_8274E378(param_1);
  return;
}

