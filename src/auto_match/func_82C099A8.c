unsigned int fn_82C099A8(int param_1, int *param_2)
{
  unsigned r;

  *param_2 = param_1 + 0x7c;
  r = (*(int (**)())(*(int *)(param_1 + 0x7c) + 0x34))(param_1 + 0x7c);
  return r == 0 ? 0x8000000a : 0;
}
