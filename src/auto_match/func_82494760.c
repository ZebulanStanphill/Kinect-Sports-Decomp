extern int fn_8248F8E8();
extern int fn_82494960();
extern unsigned int lbl_821BEE74;


unsigned int * fn_82494760(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEE74;
  fn_82494960();
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

