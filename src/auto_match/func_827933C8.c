extern int fn_82790800();
extern int fn_82792510();


void fn_827933C8(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_82792510(param_1,param_1[3],(unsigned __int64)param_1[1] + 1);
  lVar1 = (unsigned __int64)param_1[1] * 0x2c + (unsigned __int64)*param_1 + -0x2c;
  if (lVar1 != 0) {
    fn_82790800(lVar1,param_2);
  }
  return;
}

