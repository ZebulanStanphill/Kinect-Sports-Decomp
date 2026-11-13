extern int fn_82E7BD90();
extern int fn_82E7E7E0();
extern int fn_82E7F0F8();


int  fn_82E44B98(__int64 param_1,unsigned int param_2)

{
  int lVar1;
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    fn_82E7F0F8(param_2);
    lVar1 = fn_82E7BD90(param_1 + 8,0,param_2);
    if (lVar1 < 0) {
      fn_82E7E7E0(param_2);
    }
  }
  return lVar1;
}

