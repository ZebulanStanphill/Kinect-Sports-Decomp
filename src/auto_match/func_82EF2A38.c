extern int fn_82E583E0();
extern int fn_82EF1C08();
extern int fn_82EF29A8();
extern unsigned int lbl_82160508;
extern unsigned int lbl_82160510;
extern unsigned int lbl_82160524;


void fn_82EF2A38(unsigned int *param_1)

{
  *param_1 = &lbl_82160524;
  param_1[1] = &lbl_82160510;
  fn_82EF29A8(param_1 + 1);
  param_1[0x14] = &lbl_82160508;
  if (param_1[0x16] == 0) {
    fn_82EF1C08(param_1 + 0x14,0);
  }
  fn_82E583E0(param_1);
  return;
}

