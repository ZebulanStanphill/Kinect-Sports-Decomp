extern int fn_8267BE38();
extern int fn_826C1AD8();
extern unsigned int lbl_8200B760;
extern unsigned int lbl_8200B7F0;


unsigned int * fn_826C2F78(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8200B760;
  param_1[4] = &lbl_8200B7F0;
  fn_826C1AD8();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

