extern int fn_82D5F458();
extern int fn_82D74440();


void fn_82D5F670(int param_1)

{
  fn_82D74440();
  *(int (***)())(param_1 + 0x2c) = fn_82D5F458;
  return;
}

