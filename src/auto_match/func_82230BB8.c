extern int fn_82231B60();
extern int fn_8265CA20();
extern unsigned int lbl_82196410;


unsigned int * fn_82230BB8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82196410;
  fn_82231B60(param_1 + 0x49);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

