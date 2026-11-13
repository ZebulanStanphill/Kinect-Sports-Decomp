extern int fn_8267BE38();
extern int fn_8267C488();
extern unsigned int lbl_82015E08;
extern unsigned int lbl_82015E14;


void fn_827ABF18(unsigned int *param_1)

{
  *param_1 = &lbl_82015E14;
  if (param_1[3] != 0) {
    fn_8267BE38(param_1[3]);
  }
  *param_1 = &lbl_82015E08;
  fn_8267C488(param_1);
  return;
}

