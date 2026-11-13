extern int fn_8265C990();
extern int fn_82C00548();
extern int fn_82C02EA0();
extern int fn_82C06390();
extern int fn_82C06590();
extern int fn_82C0B9A8();
extern unsigned int lbl_820EC640;


unsigned int * fn_82C03B30(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EC640;
  fn_82C02EA0();
  fn_82C0B9A8(param_1 + 0x34);
  fn_82C00548(param_1 + 0x1f);
  fn_82C06590(param_1 + 0xe);
  fn_82C06390(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c8017);
  }
  return param_1;
}

