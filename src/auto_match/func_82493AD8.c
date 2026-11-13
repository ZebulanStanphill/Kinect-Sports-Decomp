extern int fn_8248F8E8();
extern int fn_82493CD0();
extern unsigned int lbl_821BED3C;


unsigned int * fn_82493AD8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BED3C;
  fn_82493CD0();
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

