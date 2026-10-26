int fn_82AD11D0(int param_1)
{
  unsigned int k = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  unsigned char b = k >= 0x53 && k <= 0x5f;
  if (b && k != 0x55 && k != 0x57 && k != 0x5a && k != 0x5e) {
    return 0;
  }
  return 1;
}
