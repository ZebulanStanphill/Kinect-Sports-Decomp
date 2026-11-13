extern int fn_827729E0();
extern int fn_82772B00();


void fn_82772CA0(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_82772B00(param_1,param_1,(unsigned __int64)param_1[1] + 1);
  lVar1 = (unsigned __int64)param_1[1] * 0x24 + (unsigned __int64)*param_1 + -0x24;
  if (lVar1 != 0) {
    fn_827729E0(lVar1,param_2);
  }
  return;
}

