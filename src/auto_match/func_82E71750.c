extern int fn_82E4FE40();
extern int fn_82E6FB58();
extern unsigned int lbl_8215EE30;


unsigned int * fn_82E71750(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8215EE30;
  fn_82E6FB58();
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

