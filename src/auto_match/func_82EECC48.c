extern int fn_82E4FE40();
extern int fn_82EEB880();
extern int fn_82EEE500();
extern int fn_82F40CA8();


unsigned int  fn_82EECC48(unsigned int param_1,unsigned int param_2)

{
  fn_82EEB880();
  fn_82EEE500(param_1 + 0x58);
  fn_82F40CA8(param_1 + 0x4c);
  if (((param_2 & 1) != 0) && ((param_1 & 0xffffffff) != 0)) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

