extern int fn_8248F8E8();
extern int fn_82493E80();
extern unsigned int lbl_821BED84;


unsigned int * fn_82493D58(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BED84;
  fn_82493E80();
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

