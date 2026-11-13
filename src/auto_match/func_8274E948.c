extern int fn_8274E890();
extern unsigned int lbl_82013700;
extern unsigned int lbl_82013724;
extern unsigned int lbl_82013728;


unsigned int * fn_8274E948(unsigned int *param_1)

{
  fn_8274E890();
  *param_1 = &lbl_82013700;
  param_1[4] = &lbl_82013728;
  param_1[0xf] = &lbl_82013724;
  return param_1;
}

