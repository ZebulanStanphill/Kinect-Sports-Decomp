typedef unsigned int uint;
void fn_82BCFB50(int param_1)
{
  uint *p = *(uint **)(param_1 + 0xb0);
  uint i;
  for (i = 0; i < *p; i++) {
    p[i + 2] = 0;
  }
}
