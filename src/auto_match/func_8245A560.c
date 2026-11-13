extern int fn_82230300();
extern int fn_8265CA20();
extern unsigned int lbl_821BABCC;


unsigned int * fn_8245A560(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BABCC;
  fn_82230300(param_1 + 0x20032,1,0);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

