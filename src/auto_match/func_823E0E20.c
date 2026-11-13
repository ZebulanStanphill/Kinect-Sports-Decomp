extern int fn_823D9FC0();
extern int fn_8265CA20();
extern unsigned int lbl_821B6A4C;


unsigned int * fn_823E0E20(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B6A4C;
  fn_823D9FC0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

