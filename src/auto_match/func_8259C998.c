extern int fn_8259C9E8();
extern int fn_8265CA20();


unsigned __int64 fn_8259C998(unsigned __int64 param_1,unsigned int param_2)

{
  fn_8259C9E8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

