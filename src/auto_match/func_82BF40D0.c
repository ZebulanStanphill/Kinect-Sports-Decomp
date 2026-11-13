extern int fn_82BE8D28();
extern int fn_82BEC880();
extern unsigned int lbl_820EB804;

unsigned int * fn_82BF40D0(unsigned int *param_1, int param_2, int param_3, int param_4,
                         unsigned int param_5)
{
  fn_82BEC880(param_1, param_2, param_3, param_4);
  param_1[0x15] = param_5;
  *param_1 = (unsigned int)&lbl_820EB804;
  if (param_5 != 0) {
    fn_82BE8D28(*(int *)(*(int *)(param_5 + 4) + 4) + param_5 + 4);
  }
  return param_1;
}
