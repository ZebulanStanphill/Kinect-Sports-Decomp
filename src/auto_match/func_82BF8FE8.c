extern int fn_82BE56C0();
extern int fn_82BF8F10();


unsigned __int64 fn_82BF8FE8(unsigned __int64 param_1,unsigned int param_2)

{
  fn_82BF8F10();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

