unsigned int fn_82C09910(int param_1, int *param_2)
{
  unsigned r;

  *param_2 = param_1 + 0x38;
  r = (*(int (**)())(*(int *)(param_1 + 0x38) + 0x34))(param_1 + 0x38);
  return r == 0 ? 0x8000000a : 0;
}
