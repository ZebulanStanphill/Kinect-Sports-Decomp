extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_8267C8D8();
extern int fn_8267D9C0();
extern int fn_82687270();
extern int fn_82687EE0();
extern int fn_826EA050();
extern int fn_826F31A8();
extern int fn_826F3368();
extern unsigned int lbl_8200C69C;


void fn_826D9C78(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = param_1[0x20];
  *param_1 = &lbl_8200C69C;
  fn_8267C8D8(uVar1 + 8);
  fn_826F31A8(param_1 + 6);
  fn_8267D9C0(uVar1 + 8);
  if (param_1[0x20] != 0) {
    fn_8267C4F0(param_1[0x20]);
  }
  fn_82687EE0(param_1[0x1c],param_1[0x1d]);
  fn_8267BE38(param_1[0x1c]);
  fn_826EA050(param_1 + 0x15);
  fn_82687EE0(param_1[0x12],param_1[0x13]);
  fn_8267BE38(param_1[0x12]);
  fn_826F3368(param_1 + 6);
  if (param_1[3] != 0) {
    fn_82687270(param_1[3]);
  }
  fn_8267C488(param_1);
  return;
}

