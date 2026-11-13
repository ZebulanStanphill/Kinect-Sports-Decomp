extern int fn_82E7B958();
extern int fn_82E7E7E0();


int  fn_82E44B40(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int lVar1;
  
  lVar1 = fn_82E7B958(param_1 + 8,0,param_2,param_3);
  if (lVar1 < 0) {
    fn_82E7E7E0(param_3);
  }
  return lVar1;
}

