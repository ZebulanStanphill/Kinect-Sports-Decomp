extern int fn_82E583E0();
extern int fn_82EE3128();
extern int fn_82EEF998();
extern int fn_82EF0C98();
extern unsigned int lbl_82160304;
extern unsigned int lbl_8216030C;
extern unsigned int lbl_82160320;
extern unsigned int lbl_82162C1C;


void fn_82EF0D90(unsigned int *param_1)

{
  *param_1 = &lbl_82160320;
  param_1[1] = &lbl_8216030C;
  fn_82EF0C98(param_1 + 1);
  param_1[0x6c] = &lbl_82162C1C;
  if (param_1[0x6d] == 0) {
    fn_82EE3128(param_1 + 0x6c,0);
  }
  param_1[0x12] = &lbl_82160304;
  if (param_1[0x13] == 0) {
    fn_82EEF998(param_1 + 0x12,0);
  }
  fn_82E583E0(param_1);
  return;
}

