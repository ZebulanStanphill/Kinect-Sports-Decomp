extern int fn_82802600();

void fn_828013D0(unsigned int param_1,int param_2)
{
  if (*(unsigned int *)(param_2 + 0x18) == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  fn_82802600(*(int *)(param_2 + 0x18),param_1);
  return;
}
