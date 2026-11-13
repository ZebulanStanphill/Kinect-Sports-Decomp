extern int fn_8265CA20();
extern int fn_83008310();
extern unsigned int lbl_8217BDAC;


unsigned int * fn_82FFFBC0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217BDAC;
  fn_83008310();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

