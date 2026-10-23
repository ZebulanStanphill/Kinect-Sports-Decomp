extern int fn_82A8C020(void *a, void *b, int c);
extern int fn_82A8C620(int a, unsigned int b, unsigned int c, void *d);

void fn_82A8DC48(int param_1, int param_2, int param_3, unsigned int param_4, int param_5)
{
  char auStack_40[4];
  char auStack_3c[4];
  char auStack_38[8];

  fn_82A8C620(param_3, param_4, *(unsigned int *)(param_2 + 0x28), auStack_40);
  param_4 += *(unsigned int *)(param_2 + 0x28);
  fn_82A8C620(param_3, param_4, *(unsigned int *)(param_2 + 0x2c), auStack_3c);
  fn_82A8C620(param_3, param_4 + *(unsigned int *)(param_2 + 0x2c), *(unsigned int *)(param_2 + 0x30), auStack_38);
  fn_82A8C020((void *)param_2, auStack_40, param_5);
}
