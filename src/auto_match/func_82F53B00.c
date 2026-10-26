extern void fn_824B4298(void *dst, void *src, int n);

void fn_82F53B00(int param_1, void *param_2)
{
  if (param_2 == 0) {
    return;
  }
  fn_824B4298(param_2, (void *)(param_1 + 0x60), 0x1c0);
}
