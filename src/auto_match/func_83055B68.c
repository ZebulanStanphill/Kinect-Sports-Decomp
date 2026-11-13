extern int fn_8265CA20();
extern int fn_83050928();
extern unsigned int lbl_8217E0A0;


unsigned int * fn_83055B68(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217E0A0;
  fn_83050928();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

