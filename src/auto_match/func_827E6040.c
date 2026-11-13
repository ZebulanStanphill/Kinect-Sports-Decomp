extern int fn_827D50F8();
extern unsigned int fn_827D9DC0();
extern int fn_827D9DC8();

int fn_827E6040(int param_1)
{
  if (fn_827D50F8(*(int *)(param_1 + 0x14)) != 0) {
    return 0x4c7;
  }
  if (*(int *)((*(int *)(param_1 + 4) + 3) * 0x28 + *(int *)(param_1 + 0x20)) == 0) {
    return 0x4b0;
  }
  if ((fn_827D9DC0(*(int *)(param_1 + 8)) & 2) == 0 &&
      (fn_827D9DC0(*(int *)(param_1 + 8)) & 1) == 0) {
    return 6;
  }
  fn_827D9DC8(*(int *)(param_1 + 8));
  return 0x3e4;
}
