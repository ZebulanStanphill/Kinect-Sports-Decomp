extern int fn_8265CA20();
extern int fn_83008658();
extern unsigned int lbl_8216D2CC;


unsigned int * fn_82FB0708(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8216D2CC;
  fn_83008658();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

