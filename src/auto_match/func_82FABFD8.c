extern int fn_8265CA20();
extern int fn_82FA8F70();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216CC80;
extern unsigned int lbl_8216CC88;
extern unsigned int lbl_8216CCA0;


unsigned int * fn_82FABFD8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8216CCA0;
  param_1[1] = &lbl_8216CC88;
  param_1[4] = &lbl_8216CC80;
  param_1[6] = &lbl_8216CC7C;
  fn_82FA8F70();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

