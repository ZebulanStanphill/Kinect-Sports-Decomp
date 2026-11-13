extern int fn_826C2D50();
extern unsigned int lbl_8200B7A8;
extern unsigned int lbl_8200B7F0;


unsigned int * fn_826C2E50(unsigned int *param_1)

{
  fn_826C2D50();
  *param_1 = &lbl_8200B7A8;
  param_1[4] = &lbl_8200B7F0;
  param_1[0xc] = 0;
  return param_1;
}

