extern int fn_8265CA20();
extern int fn_83002148();
extern unsigned int lbl_8217BB98;
extern unsigned int lbl_8217C940;


unsigned int * fn_82FF45A8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217BB98;
  param_1[7] = &lbl_8217C940;
  param_1[0x1f] = 0;
  fn_83002148();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

