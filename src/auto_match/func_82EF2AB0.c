extern int fn_82E4FE40();
extern int fn_82EF2A38();


unsigned int  fn_82EF2AB0(unsigned int param_1,unsigned int param_2)

{
  fn_82EF2A38();
  if (((param_2 & 1) != 0) && ((param_1 & 0xffffffff) != 0)) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

