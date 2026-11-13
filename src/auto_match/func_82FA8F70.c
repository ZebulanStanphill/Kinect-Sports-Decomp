extern int fn_82FAC580();
extern int fn_82FF53C0();
extern unsigned int lbl_8216CBE4;
extern unsigned int lbl_8216CBF8;
extern unsigned int lbl_8216CC00;
extern unsigned int lbl_8216CC18;
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_832642F4;


void fn_82FA8F70(unsigned int *param_1)

{
  *param_1 = &lbl_8216CC18;
  param_1[1] = &lbl_8216CC00;
  param_1[4] = &lbl_8216CBF8;
  param_1[6] = &lbl_8216CC7C;
  if (param_1[7] != 0) {
    fn_82FF53C0(lbl_832642F4, param_1[7]);
  }
  if (param_1[8] != 0) {
    fn_82FF53C0(lbl_832642F4, param_1[8]);
  }
  param_1[10] = 0;
  param_1[4] = &lbl_8216CBE4;
  fn_82FAC580(param_1 + 1);
  *param_1 = &lbl_8217D040;
  return;
}

