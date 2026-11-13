extern int fn_8267BE38();
extern int fn_8275CEE0();
extern int fn_8275D0F8();
extern unsigned int lbl_820147E0;


unsigned int * fn_82762B78(unsigned int *param_1,unsigned int param_2)

{
  fn_8275D0F8(param_1 + 10);
  *param_1 = &lbl_820147E0;
  fn_8275CEE0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

