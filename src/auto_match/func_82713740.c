extern int fn_8267BE38();
extern int fn_82713380();


unsigned __int64 fn_82713740(unsigned __int64 param_1,unsigned int param_2)

{
  fn_82713380();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

