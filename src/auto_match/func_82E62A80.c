extern int fn_82E4FE40();
extern int fn_82E62A30();


unsigned int  fn_82E62A80(unsigned int param_1,unsigned int param_2)

{
  fn_82E62A30();
  if (((param_2 & 1) != 0) && ((param_1 & 0xffffffff) != 0)) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

