extern int fn_82A1E658();
extern int fn_82E50EA0();
extern unsigned int lbl_8215FF48;


void fn_82EE81C0(unsigned int *param_1)

{
  *param_1 = &lbl_8215FF48;
  if ((int *)param_1[0x18] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[0x18] + 8))(param_1[0x18]);
    param_1[0x18] = 0;
  }
  if (param_1[4] != -1) {
    fn_82A1E658(param_1[4]);
  }
  fn_82E50EA0(param_1 + 9);
  return;
}

