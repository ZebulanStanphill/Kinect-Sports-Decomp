extern int fn_827E4458();
extern int fn_827E55D8();
extern unsigned int lbl_8201D870;


unsigned int * fn_827E5898(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8201D870;
  fn_827E4458();
  if ((param_2 & 1) != 0) {
    fn_827E55D8(param_1);
  }
  return param_1;
}

