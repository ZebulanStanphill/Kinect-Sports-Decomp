extern int fn_8265CA20();
extern int fn_82FFFB38();
extern unsigned int lbl_8217BD10;


unsigned int * fn_82FFFA10(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217BD10;
  fn_82FFFB38();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

