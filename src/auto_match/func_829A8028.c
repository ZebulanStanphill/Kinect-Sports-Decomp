extern int fn_8265C990();
extern int fn_82954CC0();
extern unsigned int lbl_82051CA8;


unsigned int * fn_829A8028(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82051CA8;
  fn_82954CC0();
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x24810000);
  }
  return param_1;
}

