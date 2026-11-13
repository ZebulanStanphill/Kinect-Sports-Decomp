extern int fn_8265CA20();
extern int fn_82F51660();
extern unsigned int lbl_821BF554;


unsigned int * fn_824A23A0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BF554;
  fn_82F51660();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

