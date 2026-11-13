extern int fn_826C26B0();
extern int fn_82713380();
extern unsigned int lbl_8200F254;
extern unsigned int lbl_8200F278;
extern unsigned int lbl_8200F280;


void fn_82713598(unsigned int *param_1)

{
  *param_1 = &lbl_8200F254;
  param_1[4] = &lbl_8200F280;
  param_1[0x10] = &lbl_8200F278;
  fn_826C26B0(param_1 + 0x10);
  fn_82713380(param_1);
  return;
}

