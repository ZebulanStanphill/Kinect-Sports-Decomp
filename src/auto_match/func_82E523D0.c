extern int fn_82E4FE40();
extern int fn_82E522B0();


unsigned int  fn_82E523D0(unsigned int param_1,unsigned int param_2)

{
  fn_82E522B0();
  if (((param_2 & 1) != 0) && ((param_1 & 0xffffffff) != 0)) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

