extern int fn_8267BE38();
extern int fn_8274E398();


unsigned __int64 fn_8274E4D8(unsigned __int64 param_1,unsigned int param_2)

{
  fn_8274E398();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

