extern int fn_8267BE38();
extern int fn_826C1AD8();
extern unsigned int lbl_82013688;
extern unsigned int lbl_820136DC;


unsigned int * fn_8274E540(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820136DC;
  param_1[4] = &lbl_82013688;
  fn_826C1AD8();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

