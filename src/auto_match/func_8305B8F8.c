extern int fn_83057318();
extern int fn_8305B7D8();
extern unsigned int lbl_8217E650;


unsigned int * fn_8305B8F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217E650;
  fn_8305B7D8();
  if ((param_2 & 1) != 0) {
    fn_83057318(param_1);
  }
  return param_1;
}

