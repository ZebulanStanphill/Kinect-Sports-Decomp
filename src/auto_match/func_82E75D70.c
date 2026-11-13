extern int fn_82E4FE40();
extern int fn_82E75508();
extern int fn_82E75738();
extern unsigned int lbl_8215EFB8;


unsigned int * fn_82E75D70(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8215EFB8;
  fn_82E75508();
  fn_82E75738(param_1);
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

