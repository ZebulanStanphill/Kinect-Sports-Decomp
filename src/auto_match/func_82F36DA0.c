extern int fn_82F359C8();
extern int fn_82F35AE8();
extern int fn_82F36B38();
extern int fn_82F37588();
extern unsigned int lbl_8215FE18;
extern unsigned int lbl_8215FE94;
extern unsigned int lbl_82162BB0;


void fn_82F36DA0(unsigned int *param_1)

{
  *param_1 = &lbl_8215FE18;
  param_1[1] = &lbl_8215FE94;
  fn_82F36B38();
  fn_82F35AE8(param_1 + 1);
  param_1[0x32] = &lbl_82162BB0;
  if (param_1[0x33] == 0) {
    fn_82F37588(param_1 + 0x32,0);
  }
  param_1[0x17] = &lbl_82162BB0;
  if (param_1[0x18] == 0) {
    fn_82F37588(param_1 + 0x17,0);
  }
  fn_82F359C8(param_1);
  return;
}

