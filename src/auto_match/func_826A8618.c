extern int fn_8267BE38();
extern int fn_826C1AD8();
extern unsigned int lbl_820071D8;
extern unsigned int lbl_8200722C;


unsigned int * fn_826A8618(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8200722C;
  param_1[4] = &lbl_820071D8;
  fn_826C1AD8();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

