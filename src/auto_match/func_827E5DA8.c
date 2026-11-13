extern int fn_827E4458();
extern int fn_827E5988();
extern unsigned int lbl_8201D8E0;


unsigned int * fn_827E5DA8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8201D8E0;
  fn_827E4458();
  if ((param_2 & 1) != 0) {
    fn_827E5988(param_1);
  }
  return param_1;
}

