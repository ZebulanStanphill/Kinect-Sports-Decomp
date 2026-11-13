extern int fn_8265CA20();
extern int fn_82FEC850();
extern int fn_8304DF08();
extern unsigned int lbl_8217DB48;


unsigned int * fn_8304C590(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_8217DB48;
  if (param_1[0x18] != 0) {
    fn_82FEC850((*(unsigned int *)(*(int *)(param_1[2] + 0x6c) + 0x24) & 0xf8) << 7);
    param_1[0x18] = 0;
  }
  fn_8304DF08(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

