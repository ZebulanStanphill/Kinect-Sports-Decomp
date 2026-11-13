extern int fn_8265C990();
extern int fn_82C03CC8();
extern int fn_82C06390();
extern int fn_82C0BF88();
extern unsigned int lbl_820EC6C8;


unsigned int * fn_82C04848(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EC6C8;
  fn_82C03CC8();
  fn_82C0BF88(param_1 + 0x35);
  fn_82C0BF88(param_1 + 0x23);
  fn_82C0BF88(param_1 + 0x11);
  fn_82C06390(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c8031);
  }
  return param_1;
}

