extern int fn_8267BE38();
extern int fn_82779BB8();
extern unsigned int lbl_8200D7F4;


unsigned int * fn_826EAB60(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8200D7F4;
  fn_82779BB8();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

