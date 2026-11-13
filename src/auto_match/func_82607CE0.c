extern int fn_8251E400();
extern int fn_82605028();
extern int fn_8265CA20();
extern unsigned int lbl_821CA924;


unsigned int * fn_82607CE0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821CA924;
  fn_8251E400(param_1 + 0x98);
  fn_8251E400(param_1 + 0x9d);
  fn_8251E400(param_1 + 0xa2);
  fn_8251E400(param_1 + 0xa7);
  fn_8251E400(param_1 + 0xac);
  fn_82605028(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

