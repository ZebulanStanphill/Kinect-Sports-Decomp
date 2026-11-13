extern int fn_8265CA20();
extern int fn_830B4CA0();
extern unsigned int lbl_821880CC;


unsigned int * fn_830B3A88(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821880CC;
  fn_830B4CA0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

