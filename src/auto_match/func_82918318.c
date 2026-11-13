extern int fn_826312F0();


unsigned __int64
fn_82918318(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned int *param_4,__int64 param_5)

{
  if ((int)param_5 != 0) {
    param_3 = param_3 - (int)param_4;
    do {
      *param_4 = (unsigned int)(*(int *)(param_3 + (int)param_4) != 0);
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  fn_826312F0();
  return 0;
}

