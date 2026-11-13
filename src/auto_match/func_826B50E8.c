extern int fn_8267C488();
extern int fn_826824B0();
extern int fn_826A4BB0();
extern int fn_826B10D8();
extern int fn_826B1150();
extern int fn_826FDAB8();
extern int fn_827123D0();
extern unsigned int lbl_82007BBC;


void fn_826B50E8(unsigned int *param_1)

{
  *param_1 = &lbl_82007BBC;
  fn_826FDAB8(param_1 + 0xaa);
  if (param_1[0xa8] != 0) {
    fn_826824B0(param_1[0xa8]);
  }
  fn_826B10D8(param_1 + 0xa0);
  fn_826B1150(param_1 + 0x9f);
  fn_826A4BB0(param_1 + 0x9e);
  fn_827123D0(param_1 + 2);
  fn_8267C488(param_1);
  return;
}

