extern int fn_8265CA20();
extern int fn_8300B4E8();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217CEE8;
extern unsigned int lbl_83264EC4;


unsigned int * fn_83032A80(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217CEE8;
  param_1[7] = &lbl_8217C940;
  if (lbl_83264EC4 == param_1) {
    lbl_83264EC4 = (unsigned int *)0x0;
  }
  fn_8300B4E8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

