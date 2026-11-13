extern int fn_827588D8();
extern int fn_8275AD88();


void fn_827589C0(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_827588D8(param_1,param_1,(unsigned __int64)param_1[1] + 1);
  lVar1 = (unsigned __int64)param_1[1] * 0x18 + (unsigned __int64)*param_1 + -0x18;
  if (lVar1 != 0) {
    fn_8275AD88(lVar1,param_2);
  }
  return;
}

