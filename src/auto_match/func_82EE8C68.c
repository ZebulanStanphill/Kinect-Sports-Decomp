extern int fn_82E4FE40();
extern int fn_82EE8630();


unsigned __int64 fn_82EE8C68(unsigned int param_1)

{
  if ((param_1 & 0xffffffff) != 0) {
    fn_82EE8630();
    fn_82E4FE40(param_1);
  }
  return 0;
}

