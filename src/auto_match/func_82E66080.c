extern int fn_82E4FE40();
extern int fn_82E65EF8();
extern int fn_82E66B90();
extern unsigned int lbl_82155154;


unsigned int * fn_82E66080(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82155154;
  fn_82E65EF8();
  fn_82E66B90();
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

