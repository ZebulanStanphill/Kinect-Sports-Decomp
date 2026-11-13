extern int fn_82A1CD20();
extern int fn_82A1CD98();


__int64 fn_82A1CE88(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  
  lVar1 = fn_82A1CD20(0xffffffff820886e8,0,param_2,param_3,0xffffffff832192ec);
  if (-1 < lVar1) {
    if (param_1 != 0) {
      lVar1 = fn_82A1CD20(0xffffffff820886f4,0,param_2,0,0xffffffff832192f0);
      if (lVar1 < 0) goto LAB_82a1cf18;
      lVar1 = fn_82A1CD20(0xffffffff820886f4,1,param_2,1,0xffffffff832192f4);
    }
    if (-1 < (int)lVar1) {
      return lVar1;
    }
  }
LAB_82a1cf18:
  fn_82A1CD98();
  return lVar1;
}

