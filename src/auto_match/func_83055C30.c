extern int fn_8265CA20();
extern int fn_83051070();
extern unsigned int lbl_8217E11C;
extern unsigned int lbl_8217E150;


unsigned int * fn_83055C30(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217E150;
  param_1[0x1e] = &lbl_8217E11C;
  fn_83051070();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

