extern int fn_827E4458();
extern int fn_827E6C40();
extern unsigned int lbl_8201DA10;


unsigned int * fn_827E7188(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8201DA10;
  fn_827E4458();
  if ((param_2 & 1) != 0) {
    fn_827E6C40(param_1);
  }
  return param_1;
}

