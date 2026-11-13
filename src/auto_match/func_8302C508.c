extern int fn_8265CA20();
extern int fn_82FF3F80();
extern int fn_83008658();
extern unsigned int lbl_8217C7E8;
extern unsigned int lbl_8217C940;


unsigned int * fn_8302C508(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217C7E8;
  param_1[7] = &lbl_8217C940;
  fn_83008658(param_1 + 0x22);
  fn_82FF3F80(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

