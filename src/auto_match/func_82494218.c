extern int fn_8248F8E8();
extern int fn_82494388();
extern unsigned int lbl_821BEE14;


unsigned int * fn_82494218(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEE14;
  fn_82494388();
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

