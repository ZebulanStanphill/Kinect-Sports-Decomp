extern void fn_82BE5240(int a, int code, const char *fmt, int arg);
extern void fn_82BEB838(int a, int b);

void fn_82BEAB60(int param_1, int param_2)
{
  if (*(int *)(param_2 + 0x14) == 0x1033) {
    fn_82BE5240(param_1, 0x12e, "Zone: %s", *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x10) = 0;
  }
  else if (*(int *)(param_2 + 0x14) == 0x1065) {
    fn_82BE5240(param_1, 0x199, "Zone: %s", *(int *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x10) == 0xf) {
      *(int *)(param_1 + 0x10) = 4;
    }
  }
  fn_82BEB838(param_1, param_2);
}
