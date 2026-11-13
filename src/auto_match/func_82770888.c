extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_82770158();
extern int fn_827B5EA8();
extern int fn_827B6118();
extern unsigned int lbl_820151C4;


void fn_82770888(unsigned int *param_1)

{
  *param_1 = &lbl_820151C4;
  fn_827B6118(param_1 + 0x52);
  fn_827B5EA8(param_1 + 0x46);
  fn_827B5EA8(param_1 + 0x42);
  fn_8267BE38(param_1[0x31]);
  fn_8267BE38(param_1[0x2e]);
  fn_827B5EA8(param_1 + 0x2a);
  fn_8267BE38(param_1[0x27]);
  fn_82770158(param_1 + 0xc);
  if (param_1[10] != 0) {
    fn_8267C4F0();
  }
  if (param_1[9] != 0) {
    fn_8267C4F0();
  }
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  fn_8267C488(param_1);
  return;
}

