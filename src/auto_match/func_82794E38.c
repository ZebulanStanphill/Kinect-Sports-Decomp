extern int fn_82793430();
extern int fn_827949F0();


void fn_82794E38(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_827949F0(param_1,param_1[3],(unsigned __int64)param_1[1] + 1);
  lVar1 = (unsigned __int64)param_1[1] * 0x54 + (unsigned __int64)*param_1 + -0x54;
  if (lVar1 != 0) {
    fn_82793430(lVar1,param_2);
  }
  return;
}

