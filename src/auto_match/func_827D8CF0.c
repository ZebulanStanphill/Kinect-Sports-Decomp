extern int fn_827D8B98();


unsigned int *
fn_827D8CF0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  if (((param_2 & 0xffffffff) != (param_3 & 0xffffffff)) &&
     ((param_3 & 0xffffffff) != (param_4 & 0xffffffff))) {
    fn_827D8B98(param_2,param_3,param_4,0,0);
    param_2 = ((unsigned __int64)(unsigned int)((int)param_4 - (int)param_3 >> 3) & 0x1fffffff) * 8 + param_2;
  }
  *param_1 = (int)param_2;
  return param_1;
}

