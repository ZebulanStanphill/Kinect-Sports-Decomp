extern int fn_824CC9E8();
extern int fn_8265CA20();
extern unsigned int lbl_821C0C34;


unsigned int * fn_824CEB88(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821C0C34;
  fn_824CC9E8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

