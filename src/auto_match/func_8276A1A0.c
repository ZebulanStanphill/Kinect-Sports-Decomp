extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_827B5EA8();
extern unsigned int lbl_82014CD0;
extern unsigned int lbl_82014DF0;


void fn_8276A1A0(unsigned int *param_1)

{
  *param_1 = &lbl_82014DF0;
  fn_8267BE38(param_1[0x12]);
  fn_8267C488(param_1 + 0xb);
  fn_827B5EA8(param_1 + 7);
  if (param_1[6] != 0) {
    fn_8267C498();
  }
  *param_1 = &lbl_82014CD0;
  fn_8267C488(param_1);
  return;
}

