extern int fn_827E4458();
extern int fn_827E7278();
extern unsigned int lbl_8201DA80;


unsigned int * fn_827E7660(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8201DA80;
  fn_827E4458();
  if ((param_2 & 1) != 0) {
    fn_827E7278(param_1);
  }
  return param_1;
}

