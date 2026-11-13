extern int fn_8265C990();
extern int fn_82940BE8();
extern unsigned int lbl_8202D830;


unsigned int * fn_82903D58(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8202D830;
  fn_82940BE8();
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x24810000);
  }
  return param_1;
}

