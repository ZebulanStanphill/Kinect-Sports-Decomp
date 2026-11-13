extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_826A1370();
extern int fn_826DF960();
extern unsigned int lbl_8200F7F8;
extern unsigned int lbl_8200F84C;
extern unsigned int lbl_8200F858;


void fn_827190A8(unsigned int *param_1)

{
  *param_1 = &lbl_8200F858;
  param_1[3] = &lbl_8200F84C;
  param_1[0x1a] = &lbl_8200F7F8;
  fn_8267BE38(param_1[0x28]);
  if (param_1[0x2f] != 0) {
    fn_826824B0(param_1[0x2f]);
  }
  fn_826DF960(param_1[0x29],param_1[0x2a]);
  fn_8267BE38(param_1[0x29]);
  fn_826A1370(param_1);
  return;
}

