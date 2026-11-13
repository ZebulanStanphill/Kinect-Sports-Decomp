extern int fn_82E58050();
extern unsigned int lbl_82154A88[];
extern unsigned int lbl_8215EF2C;
extern unsigned int lbl_8215FDD0;


unsigned int * fn_82E72E98(unsigned int *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_8215EF2C;
  param_1[1] = &lbl_8215FDD0;
  param_1[2] = 1;
  param_1[4] = lbl_82154A88[0];
  param_1[5] = lbl_82154A88[1];
  param_1[6] = lbl_82154A88[2];
  param_1[7] = lbl_82154A88[3];
  return param_1;
}

