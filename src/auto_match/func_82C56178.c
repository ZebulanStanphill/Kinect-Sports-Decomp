extern int fn_82C44DF0();
extern int fn_82C53970();
extern int fn_82CBBD70();


void fn_82C56178(unsigned int *param_1)

{
  fn_82CBBD70(param_1 + 1);
  fn_82CBBD70(param_1 + 4);
  fn_82CBBD70(param_1 + 7);
  fn_82CBBD70(param_1 + 10);
  fn_82C44DF0(param_1 + 0xd);
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      fn_82C53970(*param_1);
      *param_1 = 0;
    }
  }
  return;
}

