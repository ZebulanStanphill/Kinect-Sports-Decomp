extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_82759498();
extern int fn_8275A210();
extern int fn_82761DE8();
extern unsigned int lbl_8201449C;


void fn_82756EB8(unsigned int *param_1)

{
  *param_1 = &lbl_8201449C;
  fn_8275A210(param_1 + 0x1b);
  fn_82759498(param_1 + 0x11);
  fn_8267BE38(param_1[10]);
  if (param_1[2] != 0) {
    fn_82761DE8(param_1[2]);
  }
  fn_8267C488(param_1);
  return;
}

