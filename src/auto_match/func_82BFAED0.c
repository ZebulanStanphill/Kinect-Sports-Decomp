extern int fn_82BE8CE0();
extern int fn_82BE8D28();
extern unsigned int lbl_820EBE8C;


unsigned int * fn_82BFAED0(unsigned int *param_1,unsigned int param_2)

{
  fn_82BE8CE0();
  param_1[4] = (int)param_2;
  param_1[2] = 0;
  *param_1 = &lbl_820EBE8C;
  param_1[3] = 0;
  if ((param_2 & 0xffffffff) != 0) {
    fn_82BE8D28(param_2);
  }
  return param_1;
}

