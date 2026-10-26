extern void fn_822924C0(void *a, void *b);

int fn_828779B0(int param_1, void *param_2, float *param_3)
{
  fn_822924C0(param_2, (void *)(param_1 + 4));
  *param_3 = *(float *)(param_1 + 0x28);
  return 0;
}
