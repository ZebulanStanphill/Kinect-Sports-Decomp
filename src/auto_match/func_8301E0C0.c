extern int fn_8265CA20();
extern int fn_83039920();
extern unsigned int lbl_8217D040;


unsigned int * fn_8301E0C0(unsigned int *param_1,unsigned int param_2)

{
  fn_83039920(param_1 + 4);
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

