extern int fn_8250DB58();
extern int fn_827F4780();


unsigned __int64 fn_8250DB08(unsigned __int64 param_1,unsigned int param_2)

{
  fn_8250DB58();
  if ((param_2 & 1) != 0) {
    fn_827F4780(param_1);
  }
  return param_1;
}

