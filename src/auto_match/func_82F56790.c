extern int fn_82359C18();
extern int fn_82F565A0();


unsigned int  fn_82F56790(unsigned int param_1,unsigned int param_2)

{
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    fn_82359C18();
    fn_82F565A0(param_1,param_2);
  }
  return param_1;
}

