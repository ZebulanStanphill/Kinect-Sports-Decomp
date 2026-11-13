extern int fn_8265CA20();
extern int fn_82828C08();


__int64 fn_82828C58(__int64 param_1,unsigned int param_2)

{
  param_1 = param_1 + -0x58;
  fn_82828C08(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

