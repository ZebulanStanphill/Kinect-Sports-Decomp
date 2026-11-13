extern int fn_8260A488();
extern int fn_82CE4040();


void fn_82DED848(unsigned __int64 param_1,int param_2)

{
  fn_8260A488(param_2,param_1);
  if (*(unsigned int *)(param_2 + 0xa0) != 0) {
    fn_82CE4040(*(unsigned int *)(param_2 + 0xa0));
  }
  return;
}

