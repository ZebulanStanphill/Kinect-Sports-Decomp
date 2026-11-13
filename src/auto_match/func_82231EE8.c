extern int fn_82231D38();
extern int fn_8265CA20();
extern unsigned int lbl_82196A04;


unsigned int * fn_82231EE8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82196A04;
  fn_82231D38();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

