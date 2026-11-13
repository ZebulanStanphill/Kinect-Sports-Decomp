extern int fn_8228E780();
extern int fn_826838A8();


void fn_82683928(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_826838A8(param_1,param_1,(unsigned __int64)param_1[1] + 1);
  lVar1 = ((unsigned __int64)param_1[1] & 0xfffffff) * 0x10 + (unsigned __int64)*param_1 + -0x10;
  if (lVar1 != 0) {
    fn_8228E780(lVar1,param_2);
  }
  return;
}

