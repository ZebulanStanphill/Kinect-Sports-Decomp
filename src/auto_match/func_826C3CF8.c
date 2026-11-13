extern int fn_8267BE38();
extern int fn_8274BA20();
extern unsigned int lbl_8200B88C;
extern unsigned int lbl_8200B890;
extern unsigned int lbl_8200B8E4;


unsigned int * fn_826C3CF8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8200B8E4;
  param_1[4] = &lbl_8200B890;
  param_1[0xc] = &lbl_8200B88C;
  fn_8274BA20();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

