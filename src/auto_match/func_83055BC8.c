extern int fn_8265CA20();
extern int fn_83050C48();
extern unsigned int lbl_8217E0C0;
extern unsigned int lbl_8217E0F0;


unsigned int * fn_83055BC8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217E0F0;
  param_1[0x1e] = &lbl_8217E0C0;
  fn_83050C48();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

