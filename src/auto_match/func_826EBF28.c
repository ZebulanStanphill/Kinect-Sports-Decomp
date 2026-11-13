extern int fn_826EBB60();
extern int fn_8275A1C8();


void fn_826EBF28(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_826EBB60(param_1,param_1,(unsigned __int64)param_1[1] + 1);
  lVar1 = (unsigned __int64)param_1[1] * 0x28 + (unsigned __int64)*param_1 + -0x28;
  if (lVar1 != 0) {
    fn_8275A1C8(lVar1,param_2);
  }
  return;
}

