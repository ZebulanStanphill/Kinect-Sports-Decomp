extern int fn_82E4FE40();
extern int fn_82F3D0E0();


unsigned int  fn_82F3D4C8(unsigned int param_1,unsigned int param_2)

{
  fn_82F3D0E0();
  if (((param_2 & 1) != 0) && ((param_1 & 0xffffffff) != 0)) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

