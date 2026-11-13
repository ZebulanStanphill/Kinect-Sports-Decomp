extern int fn_824872A8();
extern int fn_8265CA20();
extern unsigned int lbl_821BE890;


unsigned int * fn_82486EE8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BE890;
  fn_824872A8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

