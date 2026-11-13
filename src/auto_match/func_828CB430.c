extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828DF3B8();


__int64 fn_828CB430(__int64 param_1,unsigned int param_2)

{
  fn_828B55B0(param_1 + 0x10);
  fn_828DF3B8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

