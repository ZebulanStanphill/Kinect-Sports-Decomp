extern int fn_822D02B8();
extern int fn_8265CA20();
extern unsigned int lbl_821ADCD0;


unsigned int * fn_822E1830(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821ADCD0;
  fn_822D02B8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

