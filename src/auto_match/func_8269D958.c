extern int fn_82695DA0();
extern int fn_8269CF58();


void fn_8269D958(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_8269CF58(param_1,param_1,(unsigned __int64)param_1[1] + 1);
  lVar1 = ((unsigned __int64)param_1[1] & 0xfffffff) * 0x10 + (unsigned __int64)*param_1 + -0x10;
  if (lVar1 != 0) {
    fn_82695DA0(lVar1,param_2);
  }
  return;
}

