extern int fn_8265C990();
extern int fn_82C101C8();
extern unsigned int lbl_820EC748;


unsigned int * fn_82C04920(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EC748;
  fn_82C101C8();
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c8033);
  }
  return param_1;
}

