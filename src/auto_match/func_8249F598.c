extern int fn_8249F7D0();
extern int fn_8265CA20();
extern unsigned int lbl_821BF0D4;


unsigned int * fn_8249F598(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BF0D4;
  fn_8249F7D0(param_1,0);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

