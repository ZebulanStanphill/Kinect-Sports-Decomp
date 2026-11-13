extern int fn_8267BE38();
extern int fn_8275CEE0();
extern unsigned int lbl_820147E0;


unsigned int * fn_827637B8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820147E0;
  fn_8275CEE0();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

