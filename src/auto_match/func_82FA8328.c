extern int fn_82FAC580();
extern int fn_82FEFE60();
extern unsigned int lbl_8216CB88;
extern unsigned int lbl_8216CB90;
extern unsigned int lbl_8216CBCC;
extern unsigned int lbl_8217D264;


void fn_82FA8328(unsigned int *param_1)

{
  *param_1 = &lbl_8216CB90;
  param_1[1] = &lbl_8216CB88;
  param_1[3] = &lbl_8217D264;
  param_1[0x62] = &lbl_8216CBCC;
  fn_82FAC580(param_1 + 0x62);
  fn_82FEFE60(param_1);
  return;
}

