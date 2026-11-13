extern int fn_82A4F4E0();
extern int fn_82A5D600();


unsigned __int64 fn_82A5D890(unsigned __int64 param_1,unsigned int param_2)

{
  fn_82A5D600();
  if ((param_2 & 1) != 0) {
    fn_82A4F4E0(param_1);
  }
  return param_1;
}

