extern int fn_8265C990();
extern int fn_82C003F0();
extern int fn_82C01D28();
extern int fn_82C06390();
extern int fn_82C06590();
extern int fn_82C09768();
extern unsigned int lbl_820EC508;


unsigned int * fn_82C027F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EC508;
  fn_82C01D28();
  fn_82C09768(param_1 + 0x35);
  fn_82C003F0(param_1 + 0x22);
  fn_82C06590(param_1 + 0xe);
  fn_82C06390(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c801d);
  }
  return param_1;
}

