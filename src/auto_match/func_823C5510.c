extern int fn_82366A98();
extern int fn_8251FA58();
extern int fn_825708F0();
extern int fn_8265CA20();
extern unsigned int lbl_821B6098;


unsigned int * fn_823C5510(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B6098;
  fn_825708F0(param_1[0x92],param_1[0x93]);
  fn_825708F0(param_1[0x92],param_1[0x94]);
  if (param_1[0x97] != 0) {
    fn_8251FA58(param_1[0x97]);
  }
  fn_82366A98(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

