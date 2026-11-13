extern int fn_823019E8();
extern int fn_8265CA20();
extern unsigned int lbl_821AECCC;


unsigned int * fn_82301890(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AECCC;
  fn_823019E8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

