extern int fn_8267BE38();
extern int fn_826C1AD8();
extern int fn_827121D0();


__int64 fn_8271B800(__int64 param_1,unsigned int param_2)

{
  fn_827121D0(param_1 + 0x30);
  fn_826C1AD8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

