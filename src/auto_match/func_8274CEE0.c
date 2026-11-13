extern int fn_8267BE38();
extern int fn_8274CE00();


unsigned __int64 fn_8274CEE0(unsigned __int64 param_1,unsigned int param_2)

{
  fn_8274CE00();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

