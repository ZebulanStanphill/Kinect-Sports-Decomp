extern int fn_82E4FE40();
extern int fn_82E73028();
extern unsigned int lbl_8215EF68;


unsigned int * fn_82E73C00(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8215EF68;
  fn_82E73028();
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

