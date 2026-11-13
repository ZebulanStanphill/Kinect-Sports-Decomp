extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern unsigned int lbl_82014CD0;
extern unsigned int lbl_82014D18;


void fn_827687B0(unsigned int *param_1)

{
  *param_1 = &lbl_82014D18;
  fn_8267BE38(param_1[0x11]);
  fn_8267C488(param_1 + 10);
  fn_8267BE38(param_1[7]);
  if (param_1[6] != 0) {
    fn_8267C498();
  }
  *param_1 = &lbl_82014CD0;
  fn_8267C488(param_1);
  return;
}

