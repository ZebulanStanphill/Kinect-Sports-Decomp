extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821BA984;


unsigned int * fn_8240D5F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BA984;
  fn_82359C18(param_1 + 10);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

