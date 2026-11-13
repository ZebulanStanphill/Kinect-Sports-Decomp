extern int fn_8267BE38();
extern int fn_826C2EA0();
extern int fn_8273CEF0();


__int64 fn_8273E8F8(__int64 param_1,unsigned int param_2)

{
  fn_8273CEF0(param_1 + 0x34);
  fn_826C2EA0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

