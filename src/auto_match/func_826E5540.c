extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_826E4360(param_1);
extern int fn_826EA050();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82005928;
extern unsigned int lbl_8200D5B4;
extern unsigned int lbl_8200D5BC;
extern unsigned int lbl_8200D5D0;


void fn_826E5540(unsigned int *param_1)

{
  *param_1 = &lbl_8200D5D0;
  param_1[2] = &lbl_8200D5BC;
  param_1[4] = &lbl_8200D5B4;
  fn_826E4360(param_1);
  fn_826EA050(param_1 + 9);
  if (param_1[6] != 0) {
    fn_8267C4F0(param_1[6]);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0(param_1[5]);
  }
  param_1[4] = &lbl_82005700;
  param_1[2] = &lbl_82005928;
  fn_8267C488(param_1);
  return;
}

