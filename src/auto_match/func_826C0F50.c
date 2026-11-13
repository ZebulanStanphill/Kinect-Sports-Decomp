extern int fn_8267BE38();
extern int fn_826C2EA0();
extern unsigned int lbl_8200B690;
extern unsigned int lbl_8200B6E8;


unsigned int * fn_826C0F50(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8200B6E8;
  param_1[4] = &lbl_8200B690;
  fn_826C2EA0();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

