extern int fn_82FA8E48();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216CC80;
extern unsigned int lbl_8216CC88;
extern unsigned int lbl_8216CCA0;


unsigned int * fn_82FABD78(unsigned int *param_1)

{
  fn_82FA8E48();
  param_1[0xe] = 0;
  *param_1 = &lbl_8216CCA0;
  param_1[1] = &lbl_8216CC88;
  param_1[4] = &lbl_8216CC80;
  param_1[6] = &lbl_8216CC7C;
  return param_1;
}

