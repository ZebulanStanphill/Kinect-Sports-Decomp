extern int fn_82E583E0();
extern int fn_82F37588();
extern int fn_82F3E1E0();
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_8215FDE4;
extern unsigned int lbl_82162BB0;


void fn_82E727E0(unsigned int *param_1)

{
  *param_1 = &lbl_8215FDE4;
  param_1[1] = &lbl_8215FDD0;
  fn_82F3E1E0(param_1 + 1);
  param_1[0x13] = &lbl_82162BB0;
  if (param_1[0x14] == 0) {
    fn_82F37588(param_1 + 0x13,0);
  }
  fn_82E583E0(param_1);
  return;
}

