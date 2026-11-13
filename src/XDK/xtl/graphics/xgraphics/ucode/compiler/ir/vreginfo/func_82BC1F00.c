extern int fn_82BC0928();
extern unsigned int lbl_820E3564;


unsigned int * fn_82BC1F00(unsigned int *param_1,unsigned int param_2)

{
  fn_82BC0928();
  param_1[4] = param_2;
  *param_1 = &lbl_820E3564;
  return param_1;
}

