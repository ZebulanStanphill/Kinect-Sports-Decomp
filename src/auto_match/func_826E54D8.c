extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_826E42E8();
extern unsigned int lbl_8200D398;
extern unsigned int lbl_8200D5A8;


void fn_826E54D8(unsigned int *param_1)

{
  *param_1 = &lbl_8200D5A8;
  fn_826E42E8(*(unsigned int *)(param_1[4] + 0x3c),param_1);
  if (param_1[4] != 0) {
    fn_8267C4F0(param_1[4]);
  }
  *param_1 = &lbl_8200D398;
  fn_8267C488(param_1);
  return;
}

