extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_826DAE08();
extern int fn_826EA050();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82005928;
extern unsigned int lbl_8200C6A0;
extern unsigned int lbl_8200C6B4;
extern unsigned int lbl_8200C6B8;


void fn_826DB2D8(unsigned int *param_1)

{
  *param_1 = &lbl_8200C6B4;
  param_1[2] = &lbl_8200C6A0;
  param_1[4] = &lbl_8200C6B8;
  fn_826EA050(param_1 + 7);
  fn_826DAE08(param_1 + 6);
  if (param_1[5] != 0) {
    fn_8267C4F0(param_1[5]);
  }
  param_1[4] = &lbl_82005700;
  param_1[2] = &lbl_82005928;
  fn_8267C488(param_1);
  return;
}

