extern int fn_827F38B0();
extern int fn_827F38B8();
extern int fn_827F4780();


__int64 fn_827F5D30(__int64 param_1,unsigned int param_2)

{
  fn_827F38B0(param_1 + 0x48);
  fn_827F38B8(param_1);
  if ((param_2 & 1) != 0) {
    fn_827F4780(param_1);
  }
  return param_1;
}

