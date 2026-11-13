extern int fn_82230300();
extern int fn_8234FB60();
extern int fn_8265CA20();
extern unsigned int lbl_821C2CCC;


unsigned int * fn_824C9350(unsigned int *param_1,unsigned int param_2)

{
  fn_8234FB60(param_1 + 0xc);
  *param_1 = &lbl_821C2CCC;
  fn_82230300(param_1 + 3,1,0);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

