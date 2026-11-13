extern int fn_822360C8();
extern int fn_8265CA20();
extern int fn_828A8C98();


__int64 fn_82231FF8(__int64 param_1,unsigned int param_2)

{
  fn_822360C8(param_1 + 0x78);
  fn_822360C8(param_1 + 0x68);
  fn_828A8C98(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

