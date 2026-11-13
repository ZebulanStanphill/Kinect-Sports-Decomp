void fn_82BCFB50(int param_1)
{
  unsigned int *p = *(unsigned int **)(param_1 + 0xb0);
  unsigned int i;
  for (i = 0; i < *p; i++) {
    p[i + 2] = 0;
  }
}
