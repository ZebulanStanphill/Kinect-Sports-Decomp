extern int fn_82E583E0();
extern int fn_82EE3128();
extern int fn_82EE4A08();
extern int fn_82F37588();
extern unsigned int lbl_8215FC70;
extern unsigned int lbl_8215FC78;
extern unsigned int lbl_8215FC8C;
extern unsigned int lbl_82162BB0;


void fn_82EE4A80(unsigned int *param_1)

{
  *param_1 = &lbl_8215FC8C;
  param_1[1] = &lbl_8215FC78;
  fn_82EE4A08(param_1 + 1);
  param_1[0x2d] = &lbl_8215FC70;
  if (param_1[0x2e] == 0) {
    fn_82EE3128(param_1 + 0x2d,0);
  }
  param_1[0x12] = &lbl_82162BB0;
  if (param_1[0x13] == 0) {
    fn_82F37588(param_1 + 0x12,0);
  }
  fn_82E583E0(param_1);
  return;
}

