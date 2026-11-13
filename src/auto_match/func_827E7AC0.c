extern int fn_827E4458();
extern int fn_827E7750();
extern unsigned int lbl_8201DAF0;


unsigned int * fn_827E7AC0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8201DAF0;
  fn_827E4458();
  if ((param_2 & 1) != 0) {
    fn_827E7750(param_1);
  }
  return param_1;
}

