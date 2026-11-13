extern int fn_82FABDE0();
extern int fn_82FAD138();
extern int fn_82FAD4D0();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216D780;
extern unsigned int lbl_8216D794;
extern unsigned int lbl_8216D79C;
extern unsigned int lbl_8216D7B4;


void fn_82FB3F00(unsigned int *param_1)

{
  *param_1 = &lbl_8216D7B4;
  param_1[1] = &lbl_8216D79C;
  param_1[4] = &lbl_8216D794;
  param_1[6] = &lbl_8216CC7C;
  param_1[0x10] = &lbl_8216D780;
  fn_82FAD4D0(param_1 + 0x10);
  fn_82FAD138(param_1 + 0x10);
  fn_82FABDE0(param_1);
  return;
}

