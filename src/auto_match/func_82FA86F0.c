extern int fn_8265CA20();
extern int fn_82FAC580();
extern int fn_82FEFE60();
extern unsigned int lbl_8216CB88;
extern unsigned int lbl_8216CB90;
extern unsigned int lbl_8216CBCC;
extern unsigned int lbl_8217D264;


unsigned int * fn_82FA86F0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8216CB90;
  param_1[1] = &lbl_8216CB88;
  param_1[3] = &lbl_8217D264;
  param_1[0x62] = &lbl_8216CBCC;
  fn_82FAC580(param_1 + 0x62);
  fn_82FEFE60(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

