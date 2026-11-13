extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821AF528;


unsigned int * fn_823135D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AF528;
  fn_82359C18(param_1 + 0x10);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

