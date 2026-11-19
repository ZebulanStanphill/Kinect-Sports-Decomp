void fn_82DA5940(int self, unsigned int *param_2)
{
  int n;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = self + 0xc;
  param_2[5] = 0xc;
  param_2[0] = 0;
  param_2[1] = 0x10;
  n = *(int *)(self + 0x1c);
  param_2[2] = n;
  param_2[3] = n;
  param_2[1] = ((n * 0x50 + 0x33) & ~0xfu) + 0x10;
}
