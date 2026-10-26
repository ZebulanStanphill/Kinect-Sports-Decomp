extern int fn_827665B8();
extern int fn_82766860();
extern int fn_827671F0();

void fn_827675F8(int param_1)
{
  fn_827671F0(param_1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + fn_82766860(param_1, *(int *)(param_1 + 4), param_1 + 0x18);
  fn_827665B8(param_1);
}
