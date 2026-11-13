extern int fn_82764078();
extern unsigned int lbl_8200CA08;


unsigned int * fn_826E00B8(unsigned int *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0x40000;
  *param_1 = &lbl_8200CA08;
  fn_82764078(param_1 + 4);
  return param_1;
}

