extern int fn_8265CA20();
extern int fn_82FB05B8();
extern unsigned int lbl_8216D000;
extern unsigned int lbl_8217C940;


unsigned int * fn_83032330(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8216D000;
  param_1[7] = &lbl_8217C940;
  fn_82FB05B8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

