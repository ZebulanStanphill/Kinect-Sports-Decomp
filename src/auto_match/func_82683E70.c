extern int fn_8267C4F0();
extern unsigned int lbl_82005928;
extern unsigned int lbl_8200593C;


void fn_82683E70(unsigned int *param_1)

{
  *param_1 = &lbl_8200593C;
  if (param_1[1] != 0) {
    fn_8267C4F0(param_1[1]);
  }
  if (param_1[2] != 0) {
    fn_8267C4F0(param_1[2]);
  }
  *param_1 = &lbl_82005928;
  return;
}

