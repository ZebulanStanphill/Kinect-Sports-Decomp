extern int fn_827F38B0();
extern int fn_827F38B8();
extern int fn_827FA500();


__int64 fn_827FA6C8(__int64 param_1,unsigned int param_2)

{
  fn_827F38B0(param_1 + 0x20);
  fn_827F38B8(param_1);
  if ((param_2 & 1) != 0) {
    fn_827FA500(param_1);
  }
  return param_1;
}

