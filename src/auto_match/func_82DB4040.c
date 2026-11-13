extern int fn_82CE4118();
extern int fn_82D813C0();
extern int fn_82D81690();
extern int fn_82DC82C8();


void fn_82DB4040(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  
  fn_82DC82C8(param_1 + 8);
  lVar1 = param_1 - 4;
  if (param_1 == 0xc) {
    lVar1 = 0;
  }
  fn_82D813C0(param_2,lVar1);
  fn_82D81690(param_2,-(unsigned __int64)(param_1 != 0xc) & param_1);
  fn_82CE4118(param_1 - 0xc);
  return;
}

